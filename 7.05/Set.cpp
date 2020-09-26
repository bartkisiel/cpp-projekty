#include "Set.h"

Set::Set(vector<int>& set) {
    this->setArr = set;
}

Set::Set() {
    this->setArr = {0};
}

Set& Set::operator+=(const Set& loc_set) {
    for (int i : loc_set.setArr) {
        this->setArr.push_back(i);
    }
    removal();

    return *this;
}

Set& Set::operator-=(const Set& loc_set) {
    for(int i = 0; i < this->setArr.size(); i++){
        for(int j = 0; j < loc_set.setArr.size(); j++){
            if(this->setArr[i] == loc_set.setArr[j]){
                this->setArr.erase(this->setArr.begin() + i);
            }
        }
    }
    removal();

    return *this;
}

Set& Set::operator*=(const Set& loc_set) {
    vector<int> vector;
    for(int i : this->setArr){
        for(int j : loc_set.setArr){
            if(i == j) {
                vector.push_back(i);
            }
        }
    }
    this->setArr = vector;
    removal();

    return *this;
}

Set operator+(const Set& local_set_1, const Set& local_set_2) {
    Set first = local_set_1;
    Set second = local_set_2;

    return first += second;
}

Set operator-(const Set& local_set_1, const Set& local_set_2) {
    Set first = local_set_1;
    Set second = local_set_2;

    return first -= second;
}

Set operator*(const Set& local_set_1, const Set& local_set_2) {
    Set first = local_set_1;
    Set second = local_set_2;

    return first *= second;
}

ostream& operator<<(ostream& ostream, const Set& set) {
    ostream<< "{";
    for(int i : set.setArr){
        ostream << i << ",";
    }
    ostream<<"}";

    return ostream;
}

void Set::removal() {
    for(int i = 0; i < this->setArr.size() - 1; i++) {
        int j = i + 1;
        while (j < this->setArr.size()){
            if(setArr[i] == setArr[j]){
                this->setArr.erase(this->setArr.begin() + j);
            }
            else {
                ++j;
            }
        }
    }
    sort(this->setArr.begin(), this->setArr.end());
}


