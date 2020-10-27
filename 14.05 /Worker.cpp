#include "Worker.h"

Worker::Worker(const string name, int birthYear, double salary) : Person(name, birthYear) {
  this->salary = salary;
}

Void Worker::print(ostream &os) const {
  Person::print(os);
  os << "Status:  PRACOWNIK" << endl;
     << "Pensja:  " << salary << endl;
}
