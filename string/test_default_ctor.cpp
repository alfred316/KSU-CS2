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
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str;

    // VERIFY
    assert(str[0] == '\0');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str("37");

    // VERIFY
    assert(str[0] == '3');
    assert(str[1] == '7');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str('5');

    // VERIFY
    assert(str == '5');
  }

  // {
  //------------------------------------------------------
  // SETUP FIXTURE

  // TEST
  // String  str(X);

  // VERIFY
  // assert(str == YYY);
  // }

  // {
  //------------------------------------------------------
  // SETUP FIXTURE

  // TEST
  //  String  str(X);

  // VERIFY
  //  assert(str == YYY);
  // }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing default constructor." << std::endl;

}
