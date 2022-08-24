#include <iostream>
#include <math.h>

using namespace std;

int main (){
    double nota1, nota2, nota3, redacao, nota5, mediap;

    cin >> nota1 >> nota2 >> nota3 >> redacao >> nota5;
    if (redacao <= 199.99) {
        cout << "-1" << endl;
    }
    else {
    mediap = ((nota1 * 3) + (nota2 * 2) + (nota3 * 2) + (redacao * 2) + nota5) / 10;
    cout << mediap << endl;
    }








    return 0;
}