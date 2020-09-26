#ifndef _SET_H_
#define _SET_H_
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Set {
    public:
    Set(vector<int>& set);
    Set();

    Set& operator+=(const Set& loc_set);
    Set& operator-=(const Set& loc_set);
    Set& operator*=(const Set& loc_set);

    private:
    vector<int> setArr;

    void removal();

    friend Set operator+(const Set& loc_set_left, const Set& loc_set_right);
    friend Set operator-(const Set& loc_set_left, const Set& loc_set_right);
    friend Set operator*(const Set& loc_set_left, const Set& loc_set_right);

    friend ostream& operator<<(ostream& ostream, const Set& set_local);
};

#endif