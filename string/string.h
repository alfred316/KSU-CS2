//Alfred Shaker
//String header file

#ifndef AS_STRING_H_
#define AS_STRING_H_
#include <iostream>
#include <cassert>
#include <cstdlib>
const int MAXSTRING=128;
class myString{
 public:

  //default constructor
 myString():capacity(MAXSTRING){strArr= new char[capacity];
    strArr[0]='\0';};

  //copy constructor
  myString(const myString&);

  //assignment overload
  myString& operator=(const myString&);

  //destructor
  ~myString(){ delete [] strArr;};

  //swap and reallocate
  void swap(myString&);
  void reallocate(int);

  //findblack and findnotblank
  int nextBlank(const int)const;
  int nextNonBlank(const int)const;

  //justify
  myString justify(const int)const;

  //constructors
  myString(const char);
  myString(const char[]);

  //concactnation operations
  myString operator+(const myString&)const;
  myString& operator +=(const myString&);
  //relation operation
  bool operator == (const myString&)const;
  bool operator < (const myString&)const;
  bool operator > (const myString&)const;
  bool operator <= (const myString&)const;
  bool operator >=(const myString&)const;
  bool operator !=(const myString&)const;// {!(*this == rhs);};
  //  bool operator == (const char strArr[])const {return *this==myString(strArr);};
  //  bool operator !=(const char strArr[])const{return *this!=myString(strArr);};

  //accessor/modifier operators
  char operator[](const int)const;
  char& operator[](const int x){return strArr[x];};

  //I/O Operators
  friend std::ostream& operator << (std::ostream&, const myString&);
  friend std::istream& operator >> (std::istream&, myString&);

  //methods
  int length ()const;
  myString substr(int, int)const;
  int findstr(const myString&)const;
  int findchar(const char, const int)const;
  int findNotChar(const char, const int)const;
 private:
  //private array
  char *strArr;
  int capacity;
};
#endif
