#include <iostream>
using namespace std;

struct dono{
    string nome;
    int cpf;
};

struct carro {
    string cor, marca;
    int ano;
};


void func(carro& x){
    cout << "Digite a cor, a marca e o ano do carro" << endl;
    cin >> x.cor >> x.marca >> x.ano;
}
int main(){

    carro estacionamento;
    func(estacionamento);
    cout << "a cor da sua caranga veia eh: " << estacionamento.cor << endl << "a marca dessa merda eh: " << estacionamento.marca << endl << "e a porra do ano eh mais antigo que: " << estacionamento.ano << endl;
    return 0;
}