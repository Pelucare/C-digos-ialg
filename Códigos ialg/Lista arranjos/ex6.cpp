#include <iostream>
using namespace std;



int main(){

    int quantidade;
    cin >> quantidade;
    string palavra[quantidade];
    int cont[quantidade];

    for (int i=0; i < quantidade; i++){
        cin >> palavra[i];
        cont[i]=palavra[i].size();
    }

    int maior=0;
    for (int j=0; j < quantidade; j++){
        if(cont[j]>maior){
            maior = cont[j];
        }
    }

    for(int k=0; k < quantidade; k++){
        for(int j=0; j < (maior - cont[k]); j++){
        cout << "*";
        }
    cout << palavra[k] << endl;
    }
    
    return 0;
}