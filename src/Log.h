#ifndef NSERV_LOG_H
#define NSERV_LOG_H

#include <string>

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

class Logger {
public:
    static void log(LogLevel::Level level, const std::string &str);
private:
    LogLevel::Level level;
};

}       // namespace nserv

#endif  // NSERV_LOG_H
