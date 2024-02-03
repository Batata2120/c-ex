// Autor: Temasu
// 29/01/2024 19:25
// Este programa recebe um quantidade de inteiros e então retorna o maior;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int quantidade;
    int maior;

    cout << "Insira a quantidade de numeros a serem inseridos: ";
    cin >> quantidade;
    cin >> maior;

    int numeroAtual = maior;
    for(int i = 0; i < quantidade; i++){
        if(numeroAtual > maior){
            maior = numeroAtual;
        }
        cin >> numeroAtual;        
    }

    cout << "O maior numero é: " << maior << endl;

    return(0);
}