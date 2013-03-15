//Alfred Shaker
//Implimentation file for the bigint project part 1

#include "bigint.h"
void bigint::zero() {
  for (int i = 0; i < maxSize; ++i)
    bigArr[i] = 0;
}


bigint::bigint(){
  //  std::cout<<"Called default";
  zero();
}

bigint::bigint(int x){
  zero();
  // std::cout<<"Call int";
  for(int i=0;i<maxSize;i++){
    bigArr[i]=x % 10;
    x /=10;
  }
}

bigint::bigint(const char x[]){
  zero();
  // std::cout<<"begin"<<std::endl;
  int len=0;
  int k=0;
  do {
    // std::cout<<x[len]<<std::endl;
    ++len;
  }
  while(x[len]!='\0');
  for(int j=len-1; j>=0; j--,k++){
    bigArr[k]=int(x[j])-int('0');
    
    //   std::cout<<bigArr[k]<<" "<< x[j]<<std::endl;
  } 
  // std::cout<<"End"<<std::endl;
}
bool bigint::operator==(const bigint& rhs){
  // for(int i = 0; i < maxSize; i++)
  // {
  // std::cout<<bigArr[i]<<" ";
  // }
  // std::cout<<std::endl;
  for (int i=0; i<maxSize;i++){
    //    std::cout<<"Compare: "<<bigArr[i]<<" "<<rhs.bigArr[i]<<std::endl;
    if (bigArr[i]!=rhs.bigArr[i])
      {
  return false;
      }
  }
  return true;
}
void bigint::output(std::ostream& out){
  int newSize=maxSize,newOut=0;

  do{
    --newSize;
  } while(newSize>0 && bigArr[newSize]==0);

  do{
    if(newSize %80)
      out<<bigArr[newSize];
    else
      out<<bigArr[newSize]<<std::endl;
    
    --newSize, ++newOut;
  }while (newSize>=0);

}
bigint bigint::operator+(bigint rhs)const {
  int rem=0, temp=0;

  for (int i=0; i<maxSize; ++i){
    rem= bigArr[i] +rhs.bigArr[i] + rem;
    temp = rem % 10;
    rem /= 10;
    rhs.bigArr[i]=temp;
  }
  return rhs;
}
int bigint::operator[](int i)const{
  if ((i<0) || (i>=maxSize)) return 0;
  return bigArr[i];
}
std::ostream& operator<<(std::ostream& out, bigint rhs){
  rhs.output(out);
  return out;
}
std::istream& operator>>(std::istream& in, bigint& rhs){
  char ch, temp [maxSize];
  for (int j = 0; j<maxSize; j++){
    temp[j]=0;
  }
  in >> ch;
  for (int i=0; i<maxSize && ch!=';'; ++i){
    temp[i]=ch;
    in >> ch;
  }

  // std::cout << temp;
  rhs=bigint(temp);
  return in;
}
bigint bigint::timesDigit(int x){
  bigint temp;
  int rem=0, result=0;
  for (int i=0; i<maxSize; i++){
    rem= bigArr[i]*x+rem;
    result=rem %10;
    rem /= 10;
    temp.bigArr[i]=result;
  }
  return temp;
}
bigint bigint::times10(int x){
  bigint temp;
  for(int i=maxSize-1-x; i>=0; i--){
    temp.bigArr[i+x]=bigArr[i];
  }
  for(int j=0; j<x; j++){
    temp.bigArr[j]=0;
  }
  return temp;
}
bigint bigint::operator*(bigint rhs){
  bigint product=0;
  for(int i=0; i<maxSize; i++){
    product=product+(timesDigit(rhs.bigArr[i])).times10(i);
  }
  return product;
}
