#include <iostream>
using namespace std;

int fat(int num){
    if (num==0){
        return 1;
    } else {
        return num*fat(num - 1);
    }
}

int main(){
    int num;
    cin >> num;
    cout << fat(num) << endl;
    return 0;
}