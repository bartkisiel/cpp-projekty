#include <iostream> 
using namespace std;

bool countDigits(int n){
    int length = 0;
        while(n != 0) {
            length++;
            n /= 10;
        }
        
        if(length > 100) return false;
        
        else return true; 
}
int main() {
    
    int a;
    int b;
    
    
        cout << "Podaj pierwszą liczbę: " << endl;
        cin >> a;
        if(!countDigits(a)){
            cout << "Wprowadzono zbyt długą liczbę."; 
            exit(EXIT_FAILURE);
        }
                        
        cout << "Wprowadź drugą liczbę: " << endl;
        cin >> b;
        if(!countDigits(b)){
            cout << "Wprowadzono zbyt długą liczbę."; 
            exit(EXIT_FAILURE);
        }
        
        cout << a * b << endl;
}

