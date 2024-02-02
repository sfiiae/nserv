#ifndef NSERV_LOG_H
#define NSERV_LOG_H

#include <string>
#include <sstream>

namespace nserv {

class LogLevel {
public:
    enum Level {
        UNK = 0,
        DBG = 1,
        INF,
        WNG,
        ERR,
        FTL
    };

    static std::string level2Str(Level level);
    static Level str2Level(const std::string &str);
};

template<class T>
std::string formater(T &&first) {
    std::stringstream ss;
    ss << first;
    return ss.str();
}
template<class T, class ...Args>
std::string formater(T &&first, Args &&...args) {
    std::stringstream ss;
    ss << first << formater(args...) << std::endl;
    return ss.str();
}

class Logger {
public:
    static void log(LogLevel::Level level, const std::string &str);
private:
    LogLevel::Level level;
};

}       // namespace nserv

#endif  // NSERV_LOG_H
