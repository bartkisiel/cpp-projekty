#include <iostream>
#ifndef FRACTION_H
#define FRACTION_H
using namespace std;

class Fraction
{
private:
   int licznik, mianownik;
    public: 
        Fraction(){
            licznik = 1;
            mianownik = 1;
        }
        Franction(int n, int m){
            licznik = 1;
            if(m == 0){
                cout << "ZAKAZ DZIELENIA PRZEZ ZERO!" << endl;
                exit(0);
            }
            else mianownik = m;
        }
        Fraction add(Fraction u){
            int n = licznik * u.mianownik + u.licznik * mianownik;
            int m = mianownik * u.mianownik;
            return Fraction(n / gcd(n,m), m / gcd(n,m));
        }
        Fraction mult(Fraction u){
            int n = licznik * u.licznik;
            int m = mianownik * u.mianownik;
            return Fraction(n / gcd(n,m), m / gcd(n,m));
        }
        int reduce(int n, int m){
            int reszta;
            while(m != 0){
                reszta = n % m;
                n = m;
                m = reszta;
            }
            return n;
        }
        void show(){
            if(mianownik == 1) cout << licznik << endl;
            else cout << licznik << "/" << mianownik << endl;
        }

};

}

#endif // FRACTION_H
