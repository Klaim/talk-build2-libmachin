#pragma once

#include <iosfwd>
#include <string>

#include <libmachin/export.hxx>

namespace machin
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBMACHIN_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);

  template<class T>
  T foo(T value) { return value; }

  template<>
  std::string foo(std::string value) { return value + ", haha!"; }
}
