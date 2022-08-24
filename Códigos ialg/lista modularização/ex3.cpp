#include <iostream>

using namespace std;

float centimetro(float n1){
    float resultado;
    resultado = n1 * 100;
    return resultado;
}

float metro(float n1){
    float resultado;
    resultado = n1 / 100;
    return resultado;
}

int main (){

float n1, cm, m;
string unidade;

    cin >> n1 >> unidade;

        if(unidade == "centimetro"){
        
            cout << centimetro(n1) << " cm" << endl;
        } else if ( unidade == "metro"){
        
            cout << metro(n1) << " m" << endl;
        } else {
            cout << "erro" << endl;
        }

    return 0;
}