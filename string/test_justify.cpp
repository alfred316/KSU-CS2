//
//

#include "string.h"
#include <cassert>
int main(){

  {
    myString str="This is my string, you like it?";
    assert(str == "This is my string, you like it?");
    assert(str.justify(40)=="This   is   my   string,  you  like  it?");
  }

  std::cout<< "done testing justify" << std::endl;
}
