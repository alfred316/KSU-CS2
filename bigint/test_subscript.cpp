// bigint Test Program
//
// Tests:  subscript, uses ==
//

#include "bigint.h"
#include <cassert>

//===========================================================================
int main ()
{
  {
    // Setup
    bigint bi(4);

    // Test 
    int digit = bi[0];

    // Verify
    assert(bi    == 4);
    assert(digit == 4);
  }
  {
    bigint bi(98);

    int digit = bi[0];
    int tens_digit= bi[1];

    assert(bi == 98);
    assert(digit == 8);
    assert (tens_digit== 9);
  }
    
  //Add test cases as needed.

  std::cout << "Done testing subscript." << std::endl;
}
