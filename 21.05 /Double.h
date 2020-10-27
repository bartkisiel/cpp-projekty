#ifndef _DOUBLE_H_
#define _DOUBLE_H_
#include "Number.h"

class Double : public Number {
public:
  Double(double value = 0.0);
  void print(ostream& os) override;

private:
  double value;
};

#endif
