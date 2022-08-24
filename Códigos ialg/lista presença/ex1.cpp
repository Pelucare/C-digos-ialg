#include <iostream>
using namespace std;

int main(){

    int n,nf=1;
    cin >> n;
    while( n>0 ){
        n=n-nf;
        nf++;
    }
cout << nf-1;
    return 0;
}