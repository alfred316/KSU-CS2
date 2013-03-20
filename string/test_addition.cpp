//addition test file
//Alfred Shaker

#include "string.h"

int main(){
  std::cout<<"starting addition tests"<<std::endl;
  { //test 1
    std::cout<<"starting test 1"<<std::endl;
    myString str1, str2, result;
    assert(str1=="\0");
    assert(str2 == "\0");
    assert(result == "\0");
    std::cout<<"done test 1"<<std::endl;
  }

  { // test 2
    std::cout<<"starting test 2"<<std::endl;
    myString str1, str2('z'), result;

    result = str1 + str2;

    assert(str1 == "\0");
    assert(str2 == "z");
    assert(result == "z");
    std::cout<<"done test 2"<<std::endl;
  }

  { // test 3
    std::cout<<"starting test 3"<<std::endl;
    myString str1 = 'x', str2 = 'z', result;

    result = str1 + str2;

    assert(str1 == "x");
    assert(str2 == "z");
    assert(result == "xz");
    std::cout<<"done test 3"<<std::endl;
  }

  { // test 4
    std::cout<<"starting test 4"<<std::endl;
    myString str1("x"), str2("z"), result;

    result = str1 + str2;

    assert(str1 == "x");
    assert(str2 == "z");
    assert(result == "xz");
    std::cout<<"done test 4"<<std::endl;
  }

  { // test 5
    std::cout<<"starting test 5"<<std::endl;
    myString str1('x'), str2("z"), result;

    result = str1 + str2;

    assert(str1 == "x");
    assert(str2 == "z");
    assert(result == "xz");
    std::cout<<"done test 5"<<std::endl;
  }

  { // test 6
    std::cout<<"starting test 6"<<std::endl;
    myString str1("x"), str2('z'), result;

    result = str1 + str2;

    assert(str1 == "x");
    assert(str2 == "z");
    assert(result == "xz");
    std::cout<<"done test 6"<<std::endl;
  }

  { // test 7
    std::cout<<"starting test 7"<<std::endl;
    myString str1("This is a test. "), str2("I hope it works."), result;

    result = str1 + str2;

    assert(str1 == "This is a test. ");
    assert(str2 == "I hope it works.");
    assert(result == "This is a test. I hope it works.");
    std::cout<<"done test 7"<<std::endl;
  }

  { // test 8
    std::cout<<"starting test 8"<<std::endl;
    myString str1("This is a test. "), result;

    result = str1 + "I hope it works.";

    assert(str1 == "This is a test. ");
    assert(result == "This is a test. I hope it works.");
    std::cout<<"done test 8"<<std::endl;
  }

  { // test 9
    std::cout<<"starting test 9"<<std::endl;
    myString str1("Top MIA"), result;

    result = str1 + '!';

    assert(str1 == "Top MIA");
    assert(result == "Top MIA!");
    std::cout<<"done test 9"<<std::endl;
  }

  { // test 10
    std::cout<<"starting test 10"<<std::endl;
    myString str1("Top MIA! "),str2("And we're gonna lose!");

    str1 += str2;

    assert(str1 == "Top MIA! And we're gonna lose!");
    std::cout<<"done test 10"<<std::endl;
  }

  { // test 11
    std::cout<<"starting test 11"<<std::endl;
    myString str1("Top MIA! ");

    str1 += "And we're gonna lose!";

    assert(str1 == "Top MIA! And we're gonna lose!");
    std::cout<<"done test 11"<<std::endl;
  }
  std::cout<<"done addition test"<<std::endl;
}
