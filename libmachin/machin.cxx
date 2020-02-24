#include <libmachin/machin.hxx>

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

namespace machin
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Salut, " << n << '!' << endl;
  }

  void kikoo(){
    std::cout << "LOL" << std::endl;
  }
}
