// Executables must have the following defined if the library contains
// doctest definitions. For builds with this disabled, e.g. code shipped to
// users, this can be left out.
#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#endif

#include <iostream>
#include <stdlib.h>

#include "exampleConfig.h"
#include "example.h"

#include "pgcpp/pg_line.hpp"
#include "pgcpp/pg_point.hpp"
#include "pgcpp/proj_plane.hpp"
#include "pgcpp/proj_plane_concepts.h"
#include <iostream>


/*
 * Simple main program that demontrates how access
 * CMake definitions (here the version number) from source code.
 */
int main() {
  using namespace fun;

  pg_point a1{1., 3., 1.};
  pg_point a2{4., 2., 1.};
  pg_point a3{1., 1., -1.};

  pg_line l1{a2 * a3};
  pg_line l2{a1 * a3};
  pg_line l3{a1 * a2};

  std::cout << l1 << '\n';
  std::cout << l2 << '\n';
  std::cout << l3 << '\n';

  // Bring in the dummy class from the example source,
  // just to show that it is accessible from main.cpp.
  Dummy d = Dummy();
  return d.doSomething() ? 0 : -1;
}
