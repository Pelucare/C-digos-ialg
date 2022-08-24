#include <iostream>
using namespace std;

int fat(int n){
    if (n<=0){
        return 1;
    } else {
        return n*fat(n - 1);
    }
}

int main(){
    int n, catalan;
cin >> n;
catalan = ((fat(2*n)))/((fat(n+1))*(fat(n)));
cout << catalan << endl;
cout << fat(n);
    return 0;
}