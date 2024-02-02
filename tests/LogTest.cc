#include "Log.h"

#include <iostream>

int main() {
    std::cout << "==LOG TEST START==" << std::endl;

    nserv::Logger::log(nserv::LogLevel::DBG, nserv::formater("abc", 2));

    std::cout << "===LOG TEST END===" << std::endl;
    return 0;
}
