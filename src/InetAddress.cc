#include "InetAddress.h"

#include <cstring>

#include "Log.h"

namespace nserv {

InetAddress::InetAddress() {
    memset(&addr_, 0, sizeof(addr_));
}

InetAddress::InetAddress(const char *ip, uint16_t port) : InetAddress() {
    addr_.sin_family = AF_INET;
    int ret = inet_pton(AF_INET, ip, &addr_.sin_addr);
    if (ret != 1) {
        Logger::log(LogLevel::ERR,
                    formater(__LINE__,
                             ":", __func__,
                             "::inet_pton(AF_INET, ", ip, ",...) error with code", ret));
    }
    addr_.sin_port = htons(port);
}

std::string InetAddress::ip() const {
    return "";
}

uint16_t hostPort() const {
    return ntohs(addr_.sin_port);
}

}       // namespace nserv
