#include "Log.h"

#include <iostream>

namespace nserv {

std::string LogLevel::level2Str(LogLevel::Level level) {
    switch (level) {
#define XX(name) \
    case LogLevel::name: \
        return #name;
        XX(DBG)
        XX(INF)
        XX(WNG)
        XX(ERR)
        XX(FTL)
#undef XX
    default:
        return "UNK";
    }
}

LogLevel::Level LogLevel::str2Level(const std::string &str) {
    if (str == "DBG")
        return LogLevel::DBG;
    if (str == "INF")
        return LogLevel::INF;
    if (str == "WNG")
        return LogLevel::WNG;
    if (str == "ERR")
        return LogLevel::ERR;
    if (str == "FTL")
        return LogLevel::FTL;
    return UNK;
}

void Logger::log(LogLevel::Level level, const std::string &str) {
    std::cout << "[" << LogLevel::level2Str(level) << "] " << str << std::endl;
}

}       // namespace nserv
