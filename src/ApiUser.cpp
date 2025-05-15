#include "octo.h"
#include <iostream>

int main(int /*argc*/, char** /*argv*/) {
    Rotary r;
    std::cout << r.redame();
    auto amoave = SysTime::getInstance();
    amoave->clone();
}