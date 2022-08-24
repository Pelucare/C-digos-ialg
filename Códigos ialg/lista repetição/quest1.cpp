#include <iostream>
using namespace std;
int main(){
    
    int n, n2, cont=0, maior, menor, resto;
    
    cin >> n >> n2;
    
    if (n > n2 and n2!= 0){
        maior = n;
        menor = n2;
    } else {
        cont=0;
    }
    while(maior >= menor){
    resto = maior - menor;
    maior = resto;
    cont++;
    }
    cout << cont << endl;
    return 0;

}