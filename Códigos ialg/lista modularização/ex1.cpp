#include <iostream>

using namespace std;

float media(float n1, float n2){
    float media;

    media = (n1 + n2) / 2.0;

    return media;
}

int main(){
    float n1, n2;
cin >> n1 >> n2;

cout << media(n1, n2) << endl;

return 0;

}