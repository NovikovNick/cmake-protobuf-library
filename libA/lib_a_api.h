#ifndef LIB_A_API_H
#define LIB_A_API_H
#define EXPORT extern "C" __declspec(dllexport)

#include <schema.pb.h>

namespace lib_a {

__declspec(dllexport) sample::Vector2 Foo();

EXPORT int Bar();

}  // namespace lib_a

#endif  // LIB_A_API_H