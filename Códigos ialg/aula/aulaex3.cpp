#include <iostream>

using namespace std;

int main (){
    float n, menor, menor2, maior, maior2;
    cin >> n;
    maior = n;
    menor = n;
while(n > -1){
    cin >> n;
    if (n < menor and n >-1){
        menor2 = menor;
        menor = n;
    }
    if (n > maior and n >-1){
        maior2 = maior;
        maior = n;
    }
} 
cout << menor << endl << menor2 << endl << maior << endl << maior2 << endl;
    return 0;
}