//  String class test program
//
//  Tests: swap
//

#include "string.h"
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    myString str1 = "Top is MIA!",
      str2 = "Bot is MIA!";

    // Test
    str1.swap(str2);

    // Verify
    assert(str1 == "Bot is MIA!");
    assert(str2 == "Top is MIA!");
  }
  std::cout<<"done testing swap"<<std::endl;
}
