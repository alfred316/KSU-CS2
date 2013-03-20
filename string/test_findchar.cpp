// find character test file 
// Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting findchar tests"<< std::endl;
  {//test 1
    std::cout<<"starting test 1"<< std::endl;
    myString str1;

    assert(str1 == "");
    assert(str1.findchar('a', 1) == -1);
    std::cout<<"done test 1"<< std::endl;
  }

  {//test 2
    std::cout<<"starting test 2"<< std::endl;
    myString str1 = "Test case two";

    assert(str1 == "Test case two");
    assert(str1.findchar('t', 2) == 3);
    assert(str1.findchar('T', 0) == 0);
    assert(str1.findchar('z', 2) == -1);
    std::cout<<"done test 2"<< std::endl;
  }

  {//test 3
    std::cout<<"starting test 3"<< std::endl;
    myString str1 = "Top 2 MIA!";

    assert(str1 == "Top 2 MIA!");
    assert(str1.findchar('o', 0) == 1);
    assert(str1.findchar('2', 1 )== 4);
    assert(str1.findchar('M', 3)==6);
    assert(str1.findchar('z', 3) == -1);
    std::cout<<"done test 3"<< std::endl;
  }
  std::cout<<"done findchar tests"<< std::endl;
}
