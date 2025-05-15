#include <string>
#include <vector>
#include "Sys.h"

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