#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int dividendo, divisor, quociente, resto;

    cin >> dividendo >> divisor;

    if (divisor == 0){
        cout << "erro" << endl;
    }
    else {        
        quociente = dividendo / divisor;
        resto = dividendo % divisor;
    
    cout << quociente << endl << resto;
    }
   

    
    return 0;
}