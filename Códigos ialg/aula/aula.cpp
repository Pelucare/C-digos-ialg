#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int n, fat = 1, cont = 1;

    cin >> n;

    while (n > 1){
        while (cont <= n){
        fat = fat * cont;
        cont++;
        }       
        cout << fat << endl;
        cin >> n;
        fat = 1;
        cont = 1;
    }


    return 0;
}