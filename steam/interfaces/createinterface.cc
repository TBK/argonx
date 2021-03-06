#include <precompiled.hh>

#include "helpers.hh"

using namespace Steam::InterfaceHelpers;

InterfaceReg *InterfaceReg::head = nullptr;

InterfaceReg *GetInterfaceList() {
    return InterfaceReg::head;
}

void *CreateInterfaceInternal(const char *name, int *err) {
    InterfaceReg *cur;

    for (cur = InterfaceReg::head; cur != nullptr; cur = cur->next) {
        if (strcmp(cur->name, name) == 0) {
            if (cur->requiresUser) continue;

            if (err) *err = 0;
            return cur->create();
        }
    }

    if (err) *err = 1;

    return nullptr;
}

void *Steam::CreateInterfaceWithUser(const char *name, Steam::UserHandle h) {
    InterfaceReg *cur;

    for (cur = InterfaceReg::head; cur != nullptr; cur = cur->next) {
        if (strcmp(cur->name, name) == 0) {
            if (!cur->requiresUser) continue;

            return cur->createWithUser(h);
        }
    }

    return nullptr;
}

void *Steam::CreateInterface(const char *name, int *err) {
    return CreateInterfaceInternal(name, err);
}

void *Steam::CreateInterfaceWithEither(const char *name, Steam::UserHandle h) {
    if (auto with = CreateInterfaceWithUser(name, h)) {
        return with;
    }

    return CreateInterface(name, nullptr);
}

#if defined(ARGONX_WIN)
__declspec(dllexport) void *CreateInterface(const char *name, int *err) {
#else
void *CreateInterface(const char *name, int *err) {
#endif
    return CreateInterfaceInternal(name, err);
}

void Steam::DestroyInterface(const char* name, void* v) {
    InterfaceReg *cur;

    for (cur = InterfaceReg::head; cur != nullptr; cur = cur->next) {
        if (strcmp(cur->name, name) == 0) {
            return cur->destroy(v);
        }
    }

    Assert(0, "Invalid interface name passed to DestroyInterface");
}

InterfaceReg::InterfaceReg(Steam::InstantiateInterfaceFn fn, const char *name, Steam::InterfaceDestructor d) : name(name), requiresUser(false) {
    create         = fn;
    destroy        = d;

    createWithUser = nullptr;

    next = head;
    head = this;
}

InterfaceReg::InterfaceReg(Steam::InterfaceConstructor fn, const char *name, Steam::InterfaceDestructor d) : name(name), requiresUser(true) {
    createWithUser = fn;
    destroy        = d;

    create         = nullptr;

    next = head;
    head = this;
}
