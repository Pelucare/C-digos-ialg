#include <iostream>
using namespace std;

double soma(int n){

    double s;
    for(int i=1; i <= n; i++){
        s=s + i*((i+1.0)/(i+3.0));
    }
    return s;
}

int main(){

    int n;
    cin >> n;
    cout << soma(n);

    return 0;
}