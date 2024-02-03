// Autor: Temasu
// 29/01/2024 18:31
// Este programa caucula a soma de 5 digitos inseridos em sequencia
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int sum = 0;
    int quantidade = 0;
    
    cout << "Insira quantos numeros você quer somar: ";
    cin >> quantidade;
    for(int i = 0; i < quantidade; i++){
        int numeroAtual = 0;
        cin >> numeroAtual;
        sum += numeroAtual;
    }

    cout << "A soma é: " << sum << endl;

    return(0);
}