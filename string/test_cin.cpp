// string input from file, add
//
//==============================================================================
#include "string.h"
#include <fstream>
#include <iostream>
#include <cassert>

//==============================================================================
int main(){
  // Define object for input, exit if open fails
  std::ifstream in("stuff.txt");

  // Input, add, output
  myString left, right;
  in >> left >>right;
  // Output operands
  std::cout << "left:   " <<  left << "\n";
  std::cout << "right:  " << right << "\n";
  assert( left == "10000000000000000000000000000000000345;");
  assert(right == "299793000000");
    
  // Close file
  in.close();
  std::cout<< "done testing cin" << std:: endl;
  return 0;
}
