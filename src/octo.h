#include <string>
#include <vector>
#include <memory>
#include "Sys.h"
#include <iostream>

class OCTOAPI Octo {
public:
    std::string dame();
};

class OCTOAPI Rotary {
public:
    Rotary();
    std::string redame();
private:
std::vector<Octo> vo;
};