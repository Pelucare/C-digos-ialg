#include <iostream>
#include <math.h>

using namespace std;

int main (){
    int n, n2;
    cin >> n;
    cout << n << " ";
    n2 = n;
    while (n2 != 1){
        if (n2 % 2 == 0){
            n2 = n2/2;
            cout << n2 << " ";
        }
        else{
            n2 = n2 * 3 + 1;
            cout << n2 << " ";
        }
    }
    
    return 0;
}