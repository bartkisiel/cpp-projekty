#include "Manager.h"

Manager::Manager(const string& name, int birthYear, double salary, const string& dept) : Worker(name, birthYear, salary) {
  this->dept = dept;
}

Void Manager::print(ostream &os) const {
  Worker::print(os);
  os<<"Manager:   " << this->dept << endl;
}
