#include <iostream>
#include <math.h>

using namespace std;

int main (){
    string cor, cor2;
    int n, d1, d2, d3, d4, d5, d6, resto;

    cin >> cor >> cor2 >> n;
    
    d1 = n / 100000;
    resto = n % 100000;
    d2 = resto / 10000;
    resto = resto % 10000;
    d3 = resto / 1000;
    resto = resto % 1000;
    d4 = resto / 100;
    resto = resto % 100;
    d5 = resto / 10;
    resto = resto % 10;
    d6 = resto / 1;

    if(d1 == d6 and d2 == d5 and d3 == d4){
        cout << cor;
    } else {
        cout << cor2;
    }
    return 0;
}