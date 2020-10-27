#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
using namespace std;


class Person{
protected:
    string name;
    int year_of_birth;
    friend ostream& operator<<(ostream& os, Person& person);

public:
    Person(const string&, int);
    ~Person();
    void print(ostream& = cout) const; 
};

#endif

