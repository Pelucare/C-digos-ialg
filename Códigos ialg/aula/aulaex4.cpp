#include <iostream>
using namespace std;

void sequencia(int quantidade){
    int valor;
    cin >> valor;
    if (quantidade == 1){
        cout << valor << " ";
    } else {
        sequencia(quantidade - 1);
        cout << valor << " ";
    }
    
}

int main (){
    int quantidade;
    cin >> quantidade;
    sequencia(quantidade);
    return 0;
}