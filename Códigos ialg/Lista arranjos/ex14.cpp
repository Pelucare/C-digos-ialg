#include <iostream>
using namespace std;

int* realocar(int *v, int &tam){

    int *aux = new int[tam+5];

    for(int i = 0; i<tam; i++){
        aux[i] = v[i];
    }

    tam = tam + 5;

    delete []v;

    return aux;
}

int main(){
    
int *v = new int[5], valor, tam = 5, indice=0, cont = 0;

do{
    cin >> valor;

    if(indice == tam and valor > 0){
    v = realocar(v, tam);
    cont++;
    }
    
    if(valor>0){
        v[indice] = valor;
        indice++;
    }
} while(valor>0);
for(int j=0; j < indice; j++){
    cout << v[j] << " " ;   
}
cout << endl << tam << endl << cont;
    return 0;
}