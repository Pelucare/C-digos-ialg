#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int cod, pais;
    float peso, gramas, bruto, imposto, total;

    cin >> cod >> peso >> pais;

    gramas = float (peso * 1000.0);

    cout << gramas << endl;

    if (cod > 0 and cod <= 4){
        bruto = (gramas * 10.0);
        cout << float (bruto) << endl;
    } else if (cod >= 5 and cod <= 7){
        bruto = (gramas * 25.0);
        cout << float (bruto) << endl;
    } else if (cod >= 8 and cod <= 10){
        bruto = (gramas * 35.0);
        cout << float (bruto) << endl;
    }
    if(pais == 1){
        imposto = (bruto * 0.0);
        cout << float (imposto) << endl;
    } else if (pais == 2) {
        imposto = (bruto * 0.15);
        cout << float (imposto) << endl;
    } else if (pais == 3) {
        imposto = bruto * 0.25;
        cout << float (imposto) << endl;
    }

    total = bruto + imposto;
    cout << total;
    return 0;
}