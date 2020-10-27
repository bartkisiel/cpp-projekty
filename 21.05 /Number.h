#ifndef _NUMBER_H_
#define _NUMBER_H_
#include <iostream>
using namespace std;

class Number {
public:
  virtual void print(ostream& os) {

  }

  friend ostream& operator << (ostream& os, Number& os);
};

#endif
