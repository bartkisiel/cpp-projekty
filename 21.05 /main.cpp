#include <iostream>
#include "Number.h"
#include "Integer.h"
#include "Double.h"

int main(void) {
  int num;
  cout << "Enter size: " << endl;
  cin >> num;
  cout << num << endl;

  Number **numb = new Number*[num]();
  for(int i = 0; i < num; i++) {
    if(!(i%2)) numb[i] = new Integer(2);
    else numb[i] = new Double(2.5);
  }

  for(int j = 0; j < num; j++) {
    cout <<*numb[i];
  }
}
