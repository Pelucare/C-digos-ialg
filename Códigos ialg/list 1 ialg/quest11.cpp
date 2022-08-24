#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int Ni, NumeroDeDiagonais;

    cin >> Ni;
        if (Ni < 3){
            cout << "Nao eh possivel calcular as diagonais de um poligono com menos de 3 lados" << endl << "Eles nao existem!";
        }
        else{
            NumeroDeDiagonais = (Ni * (Ni - 3)) / 2;
            cout << NumeroDeDiagonais << endl;
}

    return 0;
}