//relational operations test
//ALfred Shaker
#include "string.h"

int main(){
  std::cout<<"starting relational operations test"<<std::endl;
  { //test 1
    std::cout<<"starting test 1" << std::endl;
    myString str1="aa", str2="ab";
    assert( str1 < str2);
    assert( str1 <= str2);
    assert( str1 != str2);
    std::cout<<"done test 1" << std::endl;
  }
  { //test 2
    std::cout<<"starting test 2" << std::endl;
    myString str1="aa", str2="aa";
    assert( str1 == str2);
    std::cout<<"done test 2" << std::endl;
  }
  { //test 3
    std::cout<<"starting test 3" << std::endl;
    myString str1="ba", str2="aa";
    assert( str1 > str2);
    assert( str1 >= str2);
    assert( str1 != str2);
    std::cout<<"done test 3" << std::endl;
  }
  { //test 4
    std::cout<<"starting test 4" << std::endl;
    myString str1="a", str2="ab";
    assert( str1 < str2);
    assert( str1 <= str2);
    assert( str1 != str2);
    std::cout<<"done test 4" << std::endl;
  }
  std::cout<< "Done Testing relational operations" << std::endl;
}
