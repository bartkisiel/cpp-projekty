#include <iostream>
#include <sstream>
#include "Person.h"
#include "Worker.h"
#include "Manager.h"

void PersonTest(void);
void WorkerTest(void);
void ManagerTest(void);

int main (void) {
  PersonTest();
  WorkerTest();
  ManagerTest();
}

void PersonTest(void) {
  stringstream sStream;
  string target;
  Person person ("Test", 20);
  coust << person;
  sStream << person;
  target = sStream.str();
  cout << endl << target << endl;
}

void WorkerTest(void) {
  stringstream sStream;
  string target;
  Worker worker ("Test", 20, 2650.50);
  cout << worker;
  sStream << worker;
  target = sStream.str();
  cout << endl << target << endl;
}

void ManagerTest(void) {
  stringstream sStream;
  string target;
  Manager Manager ("Test", 20, 2650.50, "Testtt");
  cout << manager;
  sStream << manager;
  target = sStream.str();
  cout << endl << target << endl;
}
