// testfile for substring 
// Alfred Shaker

#include "string.h"

//===========================================================================
int main (){
  std::cout<<"starting substr test"<<std::endl;
  {//test 1
    std::cout<<"starting test 1"<<std::endl;
    myString str1 = "iwantacookie",result1, result2,result3; //result4;

    result1 = str1.substr(0, 11);
    result2 = str1.substr(1, 11);
    result3 = str1.substr(0, 4);
    //result4 = str1.substr(1,11);

    std::cout << result1 << '\n';

    assert(str1 == "iwantacookie");
    assert(result1 == "iwantacookie");
    assert(result2 == "wantacookie");
    assert(result3 == "iwant");
    // assert(result4 == "wantacookie");
    std::cout<<"done test 1"<<std::endl;
  }

  {//test 2
    std::cout<<"starting test 2"<<std::endl;
    myString str = "Mord is number 1!";

    assert(str.substr(0, 3) == "Mord");
    assert(str.substr(5, 6) == "is");
    std::cout<<"done test 2"<<std::endl;
  }
  std::cout<<"done substr tests"<<std::endl;
}
