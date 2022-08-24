#include <iostream>

using namespace std;

void fib(int n){

    int ant = 0, pos = 1, aux = 0;
    
    for(int cont = 0; cont < n; cont++){
        cout << ant << " ";
        aux = ant + pos;
        ant = pos;
        pos = aux;
    }
}

int main(){

    int n;
    cin >> n;
    fib(n);
}

