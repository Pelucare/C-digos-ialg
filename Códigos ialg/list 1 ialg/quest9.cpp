#include <iostream>
#include <math.h>

using namespace std;

int  main (){

    int mils, min, horas, resto;
    float seg;
    cin >> mils;
    
    horas = mils / 3600000;
    resto = mils % 3600000;
    min = resto / 60000;
    resto = resto % 60000;
    seg = resto / 1000.0;

    cout << horas << " : " << min << " : " << seg << endl;


    return 0;
}