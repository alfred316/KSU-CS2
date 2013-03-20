//  test constroctor
// Alfred Shaker

#include "string.h"

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str('a');

    // VERIFY
    assert(str == "a");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str("hello");

    // VERIFY
    assert(str == "hello");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str("I'm very hungry");

    // VERIFY
    assert(str == "I'm very hungry");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str("I hope this works");

    // VERIFY
    assert(str == "I hope this works");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    myString  str("I have 1337 cookies");

    // VERIFY
    assert(str == "I have 1337 cookies");
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing character constructors." << std::endl;

}
