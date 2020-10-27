#include "Integer.h"

Integer::Integer(int value) {
  this->value = value;
}

void Integer::print(ostream &os) {
  os<<"Integer: " << this->value << endl;
}
