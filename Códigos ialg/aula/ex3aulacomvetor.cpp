#include <iostream>
using namespace std;

int func(int v[], int n, int elemento){
    
    int posicao = -1;

    for (int i=0; i<n; i++)
        if( v[i] == elemento){
        posicao = i;
        i = n;
        }
 return posicao;
}

int main (){

    int n;
    cin >> n;
    int *v= NULL;
    v = new int[n];
    for (int i=0; i<n; i++)
        cin >> v[i];
        int elemento;
        cin >> elemento;
        cout << func( v, n, elemento);
        delete []v;

    return 0;
}