#include "InetAddress.h"

#include <cstring>

namespace nserv {

InetAddress::InetAddress() {
    memset(&addr_, 0, sizeof(addr_));
}

InetAddress::InetAddress(const char *ip, uint16_t port) : InetAddress() {
    addr_.sin_family = AF_INET;
    inet_pton(AF_INET, ip, &addr_.sin_addr);

}

}       // namespace nserv
