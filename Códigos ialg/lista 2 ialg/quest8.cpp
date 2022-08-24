#include <iostream>
using namespace std;

int main(){

    string cor1, cor2, cor3;

    cin >> cor1 >> cor2;

    if(cor1 == cor2){
        cor3 = cor1;
    }
    if(cor1 == "azul"){
        if(cor2 == "amarelo"){
            cor3 = "verde";
        }
        else if(cor2 == "vermelho"){
            cor3= "violeta";
        } 
    }
    if(cor1 =="vermelho"){
        if(cor2 == "amarelo"){
            cor3= "laranja";
        }
        else if(cor2 == "azul"){
            cor3 = "violeta";
        }
    }
    if(cor1 == "amarelo"){
        if(cor2 == "azul"){
            cor3 = "verde";
        }
        else if(cor2 == "vermelho"){
            cor3 = "laranja";
        }
    }

    cout << cor3 << endl;

    return 0;
}