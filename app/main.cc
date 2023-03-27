#include <lib_a_api.h>
#include <schema.pb.h>
// #include "lib_b_api.h"
//#include <lib_b_api.cc>

#include <format>
#include <iostream>

int main() {
  /* -- lib_a -- */
  auto v = lib_a::Foo();
  std::cout << std::format("[{},{}]\n", v.x(), v.y());
  std::cout << std::format("Simple invocation from Bar() : {}\n", lib_a::Bar());
  

  /* -- proto --
  sample::Vector2 v;
  v.set_x(1234);
  v.set_y(4321);
  std::cout << std::format("[{},{}]\n", v.x(), v.y());
  */

  /* -- libB -- */
  //std::cout << std::format("libB: {}\n", lib_b::Bar());

  return 0;
}