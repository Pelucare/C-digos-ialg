#include <iostream>
using namespace std;
 
int TribRec(int n){
    if (n == 0 || n == 1 || n == 2){
        return 1;
}
    if (n == 3){
        return 2;
    } else {
        return TribRec(n - 1) + TribRec(n - 2) + TribRec(n - 3);
    }
}
 
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << TribRec(i) << " ";
    }
    return 0;
}