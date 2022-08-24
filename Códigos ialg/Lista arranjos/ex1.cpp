#include <iostream>
using namespace std;
void escreve (int v[], int n){

        cout << "[";
        for (int i=0; i < n; i++){
            if (i == n-1)
            cout << v[i];
            else
            cout << v[i] << ", ";
        }
        cout << "]" << endl;
}

int main(){

    int n;
    cin >> n;
    int vetor[n];

    for (int i=0; i < n; i++){
        cin >> vetor[i];
    }
    
    escreve(vetor,n);
    return 0;
}