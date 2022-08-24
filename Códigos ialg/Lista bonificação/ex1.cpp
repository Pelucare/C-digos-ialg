#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int dia, hora, minuto, falta; 
    float resto;
    cin >> dia >> hora >> minuto >> falta;

    dia = dia + (falta / 60) / 24;
    resto = ((falta / 60) % 24);
    hora = hora + resto;
    minuto = minuto + (falta % 60);
    if (hora > 24){
        hora = hora - 24;
        dia = dia + 1;
    }
    cout << dia << " " << hora << " " << minuto;

    return 0;
}