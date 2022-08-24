#include <iostream>
using namespace std;

void piramide(int n){
    int linha = 1, coluna = 1;
    while (linha <=n){
        while (coluna <= linha){
            cout << coluna << " ";
            coluna++;
        }
        coluna = 1;
        linha++;
        cout << endl;
    }
}

int main (){
    int n;
    cin >> n;
    piramide(n);
    return 0;
}