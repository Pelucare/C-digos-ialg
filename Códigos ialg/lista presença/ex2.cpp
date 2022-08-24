#include <iostream>
using namespace std;

int main(){
    int n,n3, n4;
    cin >> n;
    n3 = (n/1000)%10;
    n4 = (n/100)%10;

    if(n3 + n4 == 7 or n3 + n4 == 8 or n3*n4 == 12){
        cout << "Inimigo" << endl;
    } else{
        cout << "Amigo" << endl;
    }
    return 0;
}