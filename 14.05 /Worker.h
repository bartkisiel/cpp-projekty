#ifndef _WORKER_H_
#define _WORKER_H_
#include "Person.h"

class Worker : public Person {
protected:
    double salary;
public:
    Worker(const string, int, double);
    ~Worker() {};
    void print(ostream& = cout) const override;
    inline double GetSalary() const {return salary;
    };
};

#endif
