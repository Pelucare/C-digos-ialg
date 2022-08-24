#include <iostream>
using namespace std;

int soma(int n, int n2){
    int n3;
    n3 = n + n2;
    return n3;
}

int main (){
    int n, n2;
    cin >> n >> n2;
    cout << soma(n, n2) << endl;
    return 0;
}  