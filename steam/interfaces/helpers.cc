#include <precompiled.hh>

#include "helpers.hh"

#ifdef ARGONX_WIN
#include <Windows.h>

#elif defined(ARGONX_UNIX)
#include <sys/mman.h>

#endif

constexpr u32 allocatedSize = 100 * 0x1000;

namespace Steam::InterfaceHelpers {
TrampolineAllocator *TAllocator() {
    static TrampolineAllocator t;
    return &t;
}

TrampolineAllocator::TrampolineAllocator() {
#if defined(ARGONX_WIN)
    allocatedMemory = (u8 *)VirtualAlloc(nullptr, allocatedSize, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
#elif defined(ARGONX_UNIX)
    allocatedMemory = (u8 *)mmap(nullptr, allocatedSize, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
#endif
    offset = 0;
}

TrampolineAllocator::~TrampolineAllocator() {
#if defined(ARGONX_WIN)
    VirtualFree(allocatedMemory, allocatedSize, MEM_RELEASE);
#elif defined(ARGONX_UNIX)
    munmap(allocatedMemory, allocatedSize);
#endif
}

#if defined(ARGONX_64)
// clang-format off
const u8 trampolineBasis[] = {
    // push rax
    0x50,
    // movabs rax, target
    0x48, 0xB8, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    // xchg rsp, rax
    0x48, 0x87, 0x04, 0x24,
    // mov rcx, [rcx+0x8]
    0x48, 0x8b, 0x49, 0x8,
    // ret
    0xC3,
};
// clang-format on

constexpr u32 trampolineAddrOffset = 3;
#elif defined(ARGONX_32)

// x86 calling conventions differ
// So deal with them here

#if defined(ARGONX_WIN)

// mov ecx, [ecx+8]
// push 0xCCCCCCCC
// ret

// clang-format off
const u8 trampolineBasis[] = {
    0x8B, 0x49, 0x08,
    0x68, 0xCC, 0xCC, 0xCC, 0xCC,
    0xC3,
};
// clang-format on
constexpr u32 trampolineAddrOffset = 4;

#elif defined(ARGONX_UNIX)

// pop eax ; ret address
// pop ecx ; thisptr on GCC
// push [ecx + 8] ; push thisptr back on
// push eax ; push ret
// push 0xCCCCCCCC ; jmp address
// ret ; jmp to new address

// clang-format off
const u8 trampolineBasis[] = {
    0x58, 0x59,
    0xFF, 0x71, 0x08,
    0x50,
    0x68, 0xCC, 0xCC, 0xCC, 0xCC,
    0xC3
};
// clang-format on
constexpr u32 trampolineAddrOffset = 8;

#endif

#endif

constexpr u32 trampolineSize = sizeof(trampolineBasis);

void *TrampolineAllocator::CreateTrampoline(void *target) {
    auto allocAddr = allocatedMemory + offset;
    offset += trampolineSize;

    // Copy the trampoline in and write the target address
    memcpy(allocAddr, trampolineBasis, trampolineSize);
    *reinterpret_cast<uptr *>(allocAddr + trampolineAddrOffset) = (uptr)target;

    return allocAddr;
}

u32 TrampolineAllocator::NumAllocated() {
    return offset / trampolineSize;
}

u32 TrampolineAllocator::BytesAllocated() {
    return offset;
}

} // namespace Steam::InterfaceHelpers
