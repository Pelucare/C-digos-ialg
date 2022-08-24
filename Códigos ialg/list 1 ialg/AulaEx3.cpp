#include <iostream>

using namespace std;

int main(){

    int prato, bebida, sobremesa, total = 0;
      cout << "Insira aqui o numero do seu prato" << endl << "(1) Legumes cozidos" << endl << "(2) Carne vermelha" << endl << "(3) Peixe" << endl << "(4) Frango" << endl;
      cin >> prato;
      cout << "Insira aqui o numero da sua bebida" << endl << "(1) Suco de laranja" << endl << "(2) Refrigerante" << endl << "(3) Refrigerante diet" << endl << "(4) Cerveja" << endl;
      cin >> bebida;
      cout << "Insira aqui o numero da sua bebida" << endl << "(1) Mousse de chocolate" << endl << "(2) Sorvete diet" << endl << "(3) Salada de Frutas" << endl << "(4) Pudim de Leite" << endl;
      cin >> sobremesa;
      switch(prato){
        case 1:
          total = total + 500;
        cout << "500 calorias" << endl;
        break;
        case 2:
          total += 910;
          cout << "910 calorias" << endl;
        break;
        case 3:
          total += 600;
          cout << "600 calorias" << endl;
        break;
        case 4:
          total += 700;
          cout << "700 calorias" << endl;
        break;
        default:
          cout << "Opcao de prato invalida" << endl;
        break;
      }
      switch (bebida){
        case 1:
          total += 70;
          cout << "70 calorias" << endl;
        break;
        case 2:
          total += 328;
          cout << "328 calorias" << endl;
        break;
        case 3:
          total += 180;
          cout << "180 calorias" << endl;
        break;
        case 4:
          total += 150;
          cout << "150 calorias" << endl;
        break;
        default:
          cout << "Opcao de bebida invalida" << endl;
        break;        
      }
      switch (sobremesa){
        case 1:
          total += 250;
        cout << "250 calorias" << endl;
        break;
        case 2:
          total += 110  ;
          cout << "110 calorias" << endl;
        break;
        case 3:
          total += 178;
          cout << "178 calorias" << endl;
        break;
        case 4:
          total += 200;
          cout << "200 calorias" << endl;
        break;
        default:
        cout << "Opcao de sobremesa invalida" << endl;
        break;
      }
    cout << total << endl;

    return 0;
}