//  string output test file
// Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting cout test"<<std::endl;
  {//test 1
    myString str1 = "Top is MIA!";

    std::cout << str1 << std::endl;
  }


  {//test 2
    myString str1 = "x";

    std::cout << str1 << std::endl;
  }

  {//test 3
    myString str1 = "Here is line 1.\nHere is line 2.";

    std::cout << str1 << std::endl;
  }

  {//test 4
    myString str1;

    std::cout << str1 << std::endl;
  }
  std::cout<<"done testing cout"<<std::endl;
}
