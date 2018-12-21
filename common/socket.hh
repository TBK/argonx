#pragma once

#include "types.hh"

#include <string>
#include <utility>
#include <vector>

#ifdef ARGONX_WIN32
#ifndef INVALID_SOCKET
typedef unsigned long long SocketInternal;
#define INVALID_SOCKET (SocketInternal)(~0)
#else
typedef SOCKET SocketInternal;
#endif
#endif

class Socket {
    SocketInternal socket;

    bool valid;

    void ReadUnsafe(u8 *buffer, unsigned count);

public:
    Socket(const std::string &addr, const std::string &port);
    Socket(std::pair<const std::string &, const std::string &> addr_port) : Socket(addr_port.first, addr_port.second) {}

    // Blocking read functions

    u8   ReadByte();
    void Read(std::vector<u8> &output, unsigned count);

    template <unsigned int N>
    void Read(std::array<u8, N> arr) {
        ReadUnsafe(&*arr.begin(), N);
    }

    template <typename T>
    void ReadStructure(T &into) {
        ReadUnsafe(reinterpret_cast<u8 *>(&into), sizeof(T) * sizeof(u8));
    }
};