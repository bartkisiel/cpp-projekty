#include "Person.h"

Person::Person(const string& name, int yearOfBirth){
    this->name = name;
    this->year_of_birth = yearOfBirth;}

Person::~Person(){}

void Person::print(ostream& os) const{
    os << endl << "Name: " << this->name << endl
    << "Year of birth: " << this->year_of_birth << endl;
}

ostream& operator<<(ostream& os, Person& person){
    person.print(os);
    return os;
}
