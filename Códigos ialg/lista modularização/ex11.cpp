#include <iostream>
using namespace std;

int ricci (int n1, int n2, int i){

    if(i == 0){
    return n1;
    } else if (i == 1){
    return n2;
    }
    
    return (ricci(n1, n2, i - 1) + ricci(n1, n2, i - 2)); 
}

int main (){
    int termos, n1, n2;
    cin >> n1 >> n2 >> termos;
    for(int i = 0; i < termos; i++ ){
    cout << ricci(n1, n2, i) << " ";
    }
    return 0;
}