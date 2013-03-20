// find next nonblank test file
// Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting nextNonBlank tests"<< std::endl;
  {//test 1
    std::cout<<"starting test 1"<< std::endl;
    myString str1;

    assert(str1 == "");
    assert(str1.nextNonBlank(1) == -1);
    std::cout<<"done test 1"<< std::endl;
  }

  {//test 2
    std::cout<<"starting test 2"<< std::endl;
    myString str1 = "   one   two  three";

    assert(str1 == "   one   two  three");
    assert(str1.nextNonBlank(0) == 3);
    assert(str1.nextNonBlank(6) == 9);
    assert(str1.nextNonBlank(12) == 14);
    std::cout<<"done test 2"<< std::endl;
  }
  std::cout<< "done testing nextNonBlank" << std::endl;
}
