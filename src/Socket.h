#ifndef NSERV_SOCKET_H
#define NSERV_SOCKET_H

class InetAddress;

namespace nserv {

class Socket {
public:
    Socket();
    Socket(int fd);
    Socket(const Socket &oth) = default;

    int SetNonblocking();

    bool Create();
    bool Bind(InetAddress addr);
    bool Listen(int backlog = 5);


private:
    int fd_;
};

}

#endif  // NSERV_SOCKET_H
