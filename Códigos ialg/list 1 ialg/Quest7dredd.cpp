#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float velocidade, comprimento;

    cin >> comprimento;
    velocidade = 14.6 * sqrt (comprimento);
    cout << velocidade;
    return 0;
}