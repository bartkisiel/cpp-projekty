#include "Set.h"

int main() {
    vector<int> firstVector = {
        1,2,3,4
    };
    vector<int> secondVector = {
        5,1,2,3
    };

    Set firstSet(firstVector);
    Set secondSet(secondVector);

    cout << firstSet + secondSet << endl;
    cout << firstSet - secondSet << endl;
    cout << firstSet * secondSet << endl;
}