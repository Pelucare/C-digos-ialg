#include <iostream>
using namespace std;

void MDC(int numerador, int denominador){
    int resto, a, b, simplesa, simplesb;
    a = numerador;
    b = denominador;
        do{
        resto = a % b;
        a = b;
        b = resto;
        }while(resto != 0);
    simplesa = numerador / a;
    simplesb = denominador / a;
    cout << simplesa << endl << simplesb << endl;
}

int main(){

    int numerador, denominador;
    cin >> numerador >> denominador;
    MDC(numerador,denominador);

    return 0;
}