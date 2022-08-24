#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main (){
    double credito, salario;

    cin >> salario;

    if(salario <= 0){
        credito = salario * 0;
    }
    else if (salario > 0 and salario <= 199.99){
        credito = salario * 0.10;
    }
    else if (salario >= 200 and salario <= 399.99){
        credito = salario * 0.15;
    }
    else if (salario >= 400 and salario <= 799.99){
        credito = salario * 0.20;
    }
    else if (salario >= 800 and salario <= 1599.99){
        credito = salario * 0.25;
    }
    else if (salario >= 1600){
        credito = salario * 0.30;
    }

    cout << salario << endl << fixed << setprecision (2) << credito;

    return 0;
}