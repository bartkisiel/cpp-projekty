#include "Number.h"

ostream& operator<<(ostream& os, Number& num) {
  num.print(os);
  return os;
}
