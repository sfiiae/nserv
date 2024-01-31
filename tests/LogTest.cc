#include "Log.h"

#include <iostream>

int main() {
    std::cout << "==LOG TEST START==" << std::endl;

    nserv::Logger::log(nserv::LogLevel::DBG, "debug info");

    std::cout << "===LOG TEST END===" << std::endl;
    return 0;
}
