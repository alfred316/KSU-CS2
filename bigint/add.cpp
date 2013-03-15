//input test file
//Alfred Shaker

#include "bigint.h"

int main(){

  std::ifstream inFile("data1-1.txt");

  bigint left, right;

  while (inFile >> left && inFile >> right){
    std::cout << "left:  " << left << std::endl;
    std::cout << "right:  " << right << std::endl;

    bigint result= left + right;

    std::cout << "result:  " << result << std::endl;
  }
  inFile.close();
  return 0;

}
