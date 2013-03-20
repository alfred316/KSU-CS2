//  find string test file
//  Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting findstr test"<<std::endl;
  {//test 1
    std::cout<< "starting test 1"<<std::endl;
    myString str1;

    assert(str1 == "");
    assert(str1.findstr("This") == 0);
    assert(str1.findstr("\0") == 0);
    std::cout<< "done test 1"<<std::endl;
  }

  {//test 2
    std::cout<<"starting test 2"<<std::endl;
    myString str1 = "Top is MIA!";

    assert(str1 == "Top is MIA!");
    assert(str1.findstr("Top") == 1);
    assert(str1.findstr("MI") == 1);
    std::cout<<"done test 2"<<std::endl;
  }
  std::cout<<"done testing findstr"<<std::endl;
}
