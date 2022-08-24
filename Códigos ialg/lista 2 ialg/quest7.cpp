#include <iostream>
using namespace std;

int main (){

    int n, n1, n2, n3, n4, n5, resto, par = 0, impar = 0;
    
    cin >> n;

    n1 = n / 10000;
    resto = n % 10000;
    n2 = resto / 1000;
    resto = resto % 1000;
    n3 = resto / 100;
    resto = resto % 100;
    n4 = resto / 10;
    n5 = resto % 10;

    if (n1 % 2 == 0 ){
        par++;
    } else { 
        impar ++;
    }

    if (n2 % 2 == 0 ){
        par++;
    } else { 
        impar ++;
    }

    if (n3 % 2 == 0 ){
        par++;
    } else { 
        impar ++;
    }

    if (n4 % 2 == 0 ){
        par++;
    } else { 
        impar ++;
    }

    if (n5 % 2 == 0 ){
        par++;
    } else { 
        impar ++;
    }

    cout << par << endl << impar;
    
    return 0;
}