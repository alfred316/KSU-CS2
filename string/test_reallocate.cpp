//  String class test program
//
//  Tests: reallocate
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    myString str1("This is the string"),
      dupe_str1("This is the string");

    // Test 
    str1.reallocate(50);

    // Verify
    assert(str1 == "This is the string");
 
    assert(str1.length() == 18);
    assert(dupe_str1.length() == str1.length());
  }

  {
    // Setup
    myString str = "string";

    // Test
    str.reallocate(10);

    // Verify
   
    assert(str == "string");
   
  }

  {
    // Setup
    myString str;

    // Test & Verify
    str.reallocate(40);
    
    str.reallocate(20);
    
    str.reallocate(60);
   
  }

  {
    // Setup
    myString str = 'x';

    // Test
    str.reallocate(30);

    // Verify
    assert(str == "x");
    assert(str.length() == 1);
    
  }

  {
    // Setup
    myString str('x');

    // Test
    str.reallocate(2);

    // Verify
    assert(str == "x");
  }
  std::cout<<"done testing reallocate"<<std::endl;
}
