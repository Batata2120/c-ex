// Autor: Temasu
// 02/02/2024 17:45
// Este programa caucula a média de tempo de outro programa.
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    int quantidade;
    long soma = 0;
    int valorTemporario = 0;

    cin >> quantidade;

    for(int i = 0; i < quantidade; i++){
        cin >> valorTemporario;
        soma += valorTemporario;
    }

    cout << "A média é: " << (soma / quantidade) << endl;

    return(0);
}