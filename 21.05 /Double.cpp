#include "Double.h"

Double::Double(double value) {
  this->value = value;
}

void Double::print(ostream &os) {
  os << "Double: " << this->value << endl;
}
