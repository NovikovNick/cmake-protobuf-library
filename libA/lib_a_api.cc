#include "lib_a_api.h"
namespace lib_a {

sample::Vector2 Foo() {
  sample::Vector2 res;
  res.set_x(42);
  res.set_y(24);
  return res;
};

int Bar() { return 1234; }

}  // namespace lib_a
