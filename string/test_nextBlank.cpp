// find next blank test file
// Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting nextBlank tests"<< std::endl;
  {//test 1
    std::cout<<"starting test 1"<< std::endl;
    myString str1;

    assert(str1 == "");
    assert(str1.nextBlank(1) == -1);
    std::cout<<"done test 1"<< std::endl;
  }

  {//test 2
    std::cout<<"starting test 2"<< std::endl;
    myString str1 = "Test case two";

    assert(str1 == "Test case two");
    assert(str1.nextBlank(0) == 4);
    assert(str1.nextBlank(5) == 9);
    std::cout<<"done test 2"<< std::endl;
  }
  std::cout<< "dont testing nextBlank" << std::endl;
}
