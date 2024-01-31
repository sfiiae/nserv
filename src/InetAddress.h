#ifndef NSERV_INETADDRESS_H
#define NSERV_INETADDRESS_H

#include <string>

namespace nserv {

class InetAddress {
public:
    InetAddress();
    InetAddress(const char *ip, uint16_t port);

    InetAddress(const InetAddress &oth) = default;
    InetAddress &operator=(const InetAddress &oth) = default;

    ~InetAddress() = default;

    std::string ip() const;
    uint16_t hostPort() const;
private:
    struct sockaddr_in addr_;
};

}       // namespace nserv

#endif  // NSERV_INETADDRESS_H
