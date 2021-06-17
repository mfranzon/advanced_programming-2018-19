//Wrong version

// #include "utility.h"
//
// struct Foo{
//   static double f;
//   std::string bar;
//   Foo() = delete;
//   Foo(const std::string& s) :: bar[to_upper{s}] ();
// };

//Correct
#include "utility.h"

#ifndef FOO_H
#define FOO_H

struct Foo{
  static double f;
  std::string bar;
  Foo() = default;
  Foo(const std::string& s) : bar{to_upper(s)} {};
};


#endif
