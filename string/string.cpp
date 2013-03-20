//Alfred Shaker
//string functions implimentaions 
#include "string.h"
 
//copy constructor
myString::myString(const myString& rhs):capacity(MAXSTRING){
  capacity=rhs.capacity;
  strArr=new char[capacity];
  for (int i=0; i<capacity; ++i)
    strArr[i]=rhs.strArr[i];
}
//assignment overload
myString& myString::operator=(const myString& rhs){
  if(strArr==rhs.strArr)return*this;
  delete[]strArr;
  capacity=rhs.capacity;
  strArr= new char[capacity];
  for(int i=0; i<capacity; ++i)
    strArr[i]=rhs.strArr[i];
  return *this;
}
//swap and reallocate
void myString::swap(myString& rhs){
  char *temp=strArr;
  strArr=rhs.strArr;
  rhs.strArr=temp;

  int ctemp=capacity;
  capacity=rhs.capacity; 
  rhs.capacity=ctemp;
}
void myString::reallocate(int x){
  assert(x>=0);
  if (x==capacity) return;
  char *temp=new char[x];
  for (int i=0; ((i<x) && (i<capacity)); ++i)
    temp[i]=strArr[i];
  delete []strArr;
  strArr=temp;
  capacity=x;
}
//findblank and findnotblank
int myString::nextBlank(const int start)const{
  if (findchar(' ', 0)==-1) return -1;
  for(int indexNum= start; true; ++indexNum){
    if(indexNum >= length()) indexNum=0;
    if(strArr[indexNum] ==' '){
      return indexNum;
    }
  }
  return -1;
}
int myString::nextNonBlank(const int start)const{
  if (findNotChar(' ', 0)==-1) return -1;
  for(int indexNum= start; true; ++indexNum){
    if(indexNum >= length()) indexNum=0;
    if(strArr[indexNum] !=' '){
      return indexNum;
    }
  }
  return -1;
}
//Justify
myString myString::justify(const int width)const{
  myString result= *this;
  int i=0;
  if(nextBlank(0)==-1)
    return result;
  while (result.length()<width){
    i=result.nextBlank(i);
    result=result.substr(0,i)+ ' ' + result.substr(i+1,result.length());
    i=result.nextNonBlank(i);
  }
  // result.strArr[i-2]= '\0';
  return result;
}
//constructors
myString::myString(const char x):capacity(MAXSTRING){
  strArr=new char[capacity];
  strArr[0]=x;
  strArr[1]=0;
}

myString::myString(const char x[]):capacity(MAXSTRING){
  int len=0;
  strArr=new char[capacity];
  while ((x[len]!=0) && (len<MAXSTRING)){
    strArr[len]=x[len];
    ++len;
  }
  strArr[len]=0;
}
//operations
myString myString::operator+(const myString& rhs)const{
  myString result(this->length()+rhs.length()+1);
  for (int j=0; j<length(); ++j){
    result.strArr[j]=strArr[j];
  }
  int len=length();
  int i=0;
  while((rhs.strArr[i]!=0) && (i+len<MAXSTRING)){
    result.strArr[len+i]=rhs.strArr[i];
    ++i;
  }
  result.strArr[len +i]=0;
  return result;
}
myString& myString::operator +=(const myString& rhs){
  return *this = *this + rhs;
}

//relation operations
bool myString::operator==(const myString& rhs)const{
  int i=0;
  while((strArr[i]!=0) && (i<MAXSTRING)){
    if (strArr[i] != rhs.strArr[i]) return false;
    ++i;
  }
  if (rhs.strArr[i] !=0) return false;
  return true;
}
bool myString::operator!=(const myString& rhs)const{
  int i=0;
  while((strArr[i]!=0) && (i<MAXSTRING)){
    if (strArr[i] != rhs.strArr[i]) return true;
    ++i;
  }
  if (rhs.strArr[i] !=0) return true;
  return false;
}
bool myString::operator <(const myString& rhs)const{
  int i=0;
  while ((strArr[i]!=0)&&(rhs.strArr[i]!=0)&&(i<MAXSTRING))
    {
      if (strArr [i] < rhs.strArr[i]) return true;
      if (strArr[i]==rhs.strArr[i])++i;
      else return false;
    }
  if (rhs.strArr[i]==0)return false;
  return true;
}
bool myString::operator >(const myString& rhs)const{
  int i=0;
  while ((strArr[i]!=0)&&(rhs.strArr[i]!=0)&&(i<MAXSTRING))
    {
      if (strArr [i] > rhs.strArr[i]) return true;
      if (strArr[i]==rhs.strArr[i])++i;
      else return false;
      std::cout<< strArr[i] << rhs.strArr[i] << '\n';
    }
  if (rhs.strArr[i]==0)return false;
  return true;
}
bool myString::operator <=(const myString& rhs)const{
  int i=0;
  while ((strArr[i]!=0)&&(rhs.strArr[i]!=0)&&(i<MAXSTRING))
    {
      if ((strArr [i] < rhs.strArr[i])||(strArr[i]==rhs.strArr[i])) return true;
      // if (strArr[i]==rhs.strArr[i])++i;
      else return false;
    }
  if (rhs.strArr[i]==0)return false;
  return true;
}
bool myString::operator >=(const myString& rhs)const{
  int i=0;
  while ((strArr[i]!=0)&&(rhs.strArr[i]!=0)&&(i<MAXSTRING))
    {
      if ((strArr [i] > rhs.strArr[i])||(strArr[i]==rhs.strArr[i])) return true;
      // if (strArr[i]==rhs.strArr[i])++i;
      else return false;
    }
  if (rhs.strArr[i]==0)return false;
  return true;
} 
//accessor/modifier operations
char myString::operator [](const int x)const{
  if((x<0) || (x>=length())) return 0;
  return strArr[x];
}

//char& myString::operator[](const int x){
//if((x<0) || (x>length())) return 0;
//return strArr[x];
//}
//I/O operations
std::ostream& operator << (std::ostream& out, const myString& rhs){
  int i=0;
  while(rhs[i]!=0){
    out<<rhs[i];
    ++i;
  }
  return out;
}
std::istream& operator >> (std::istream& in, myString& rhs){
  myString str1;
  char temp=0;
  in >> temp;
  while (in && temp != ' ' && temp !='\t' && temp != '\n' && temp != '\r'){
    str1+=temp;
    in.get(temp);
  }
  str1.swap(rhs);
  return in;
}

//methods

int myString::length()const{
  int +result;
  return result;
}
myString myString::substr(int begin, int end)const{
  myString result;
  //assert((0<=begin)&&(begin<=end)&&(end<length());
  for (int i=begin; i<=end; ++i){
    result.strArr[i-begin]=strArr[i];
    result.strArr[end-begin+1]=0;
    // std::cout<< result << '\n';
  }
  return result;
}
int myString::findstr(const myString& rhs)const{
  int count=0;      
  if(length()>= rhs.length()){
    for (int i=0, j=0; i< length(); ++i, j=0){
      while (strArr[i+j] == rhs.strArr[j] && j <= rhs.length()){
	++j;
	if (j == rhs.length()){
	  ++count;
	  i = i+j;
	}
      }
    }
  }
  return count;
}
int myString::findchar(const char ch, const int begin)const{
  int start=-1;  
  myString temp = substr(begin, length()-1);
 

  for (int i=0; i< length(); ++i){
    if (temp[i] == ch){
      return start= i+begin;
    }
  }
  return start;
}
int myString::findNotChar(const char ch, const int begin)const{
  int start=-1;
  myString temp = substr(begin, length()-1);


  for (int i=0; i< length(); ++i){
    if (temp[i] != ch){
      return start= i+begin;
    }
  }
  return start;
}

