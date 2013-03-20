// test length
// Alfred Shaker
#include "string.h"

int main (){
  {//test 1
    myString  str;

    assert(str.length()== 0);
  }

  {//test 2
    myString  str("alfred");

    assert(str.length()== 6);
  }

  {//test 3
    myString  str("alfred");

    assert(str.length()== 6);
  }

  {//test 4
    myString  str("Top MIA and we're gonna lose!");

    assert(str.length()== 29);
  }

  // ADD ADDITIONAL TESTS AS NECESSARY
    
  std::cout << "Done testing length." << std::endl;
}
