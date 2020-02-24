#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libmachin/version.hxx>
#include <libmachin/machin.hxx>

int main ()
{
  using namespace std;
  using namespace machin;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
