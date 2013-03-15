// bigint Test Program
//
// Tests:  int constructor, uses ==
//

#include "bigint.h"

#include <cassert>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // Setup fixture
    bigint left(0);
    bigint right(0);
    bigint result;

    // Test 
    result = left + right;

    // Verify
    assert(left   == 0);
    assert(right  == 0);
    assert(result == 0);
  }
  {
    bigint left (1);
    bigint right(98);
    bigint result;

    result = left + right;
    // std::cout<< std::endl << result << std::endl;
    assert(left == 1);
    assert(right == 98);
    assert(result == 99);
  }
  {
    bigint left (54);
    bigint right(50);
    bigint result;

    result = left + right;

    assert(left == 54);
    assert(right == 50);
    assert(result == 104);
  }
  {
    bigint left (99);
    bigint right(11);
    bigint result;

    result= left + right;

    assert(left == 99);
    assert(right == 11);
    assert(result == 110);
  }

    
  //Add test cases as needed.
    
    
  std::cout << "Done with testing addition." << std::endl;
}
