#include "octo.h"

std::string Octo::dame() {
  using namespace std::string_literals;
  return "mipan"s;
}

Rotary::Rotary() {
  vo.emplace_back();
}

std::string Rotary::redame() {
  return vo[0].dame();
}