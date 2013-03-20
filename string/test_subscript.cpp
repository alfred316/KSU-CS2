//  String class test program
//
//  Tests: XXX
//

#include "string.h"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {//test 1
    myString  str;


    assert(str[0] == '\0');
  }

  {//test 2
    myString  str('x');


    assert(str[0]== 'x');
  }

  {//test 3
    myString  str("x");

    assert(str[0]=='x');
  }

  {//test 4
    myString  str("Top is MIA!");


    assert(str[0]=='T');
    assert(str[10]=='!');
  }


  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing subscript." << std::endl;
}
