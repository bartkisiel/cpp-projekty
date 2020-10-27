#ifndef _MANAGER_H_
#define _MANAGER_H_
#include "Worker.h"

class Manager : public Worker {
protected:
    string dept;
public:
    Manager(const string&, int, double, const string&);
    ~Manager();
    void print(ostream& = cout) const override;
    string get_dept() const {return dept;
    };
};

#endif
