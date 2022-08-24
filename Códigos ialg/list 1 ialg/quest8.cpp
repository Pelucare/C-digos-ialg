#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int dinheiro, n1, n2, n3, n4, n5, n6, n7, resto;

    cin >> dinheiro;
    n1 = (float(dinheiro / 100));
    resto = (dinheiro % 100);
    n2 = float(resto / 50);
    resto =(resto % 50);
    n3 = float(resto / 20);
    resto = (resto % 20);
    n4 = float(resto / 10);
    resto = (resto % 10);
    n5 = float(resto / 5);
    resto = (resto % 5);
    n6 = float(resto / 2);
    n7 = (resto % 2);

    cout << n1 << endl << n2 << endl << n3 << endl << n4 << endl << n5 << endl << n6 << endl << n7 << endl;

    return 0;
}