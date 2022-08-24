#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int comum, luxo, numero;
    
    cin >> numero;

    comum = ((numero / 3) * 2) + (numero % 3);
    luxo = (numero / 3);

    cout << comum << endl << luxo << endl;

    return 0;
}