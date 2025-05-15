#include "octo.h"

#ifdef _WIN32
 
template class OCTOAPI std::vector<Octo,std::allocator<Octo>>;

#endif // OS

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