#include <iostream>
using namespace std;

int fat(int num){
    if (num == 0 or num == 1){
        return 1;
    } else if(num > 1){
        for(int i = 0; i < num; i++){
            return num * fat(num - 2);
        }
    }
}

int main(){
    int num;
    cin >> num;
    cout << fat(num);
    return 0;
}