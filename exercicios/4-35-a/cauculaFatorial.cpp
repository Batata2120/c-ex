// Autor: Temasu
// 28/01/2024 18:37
// Este programa pede um numero e caucula seu fatorial
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero = 0;
    int contador;

    cout << "Insira o numero: ";
    cin >> numero;
    contador = numero - 1;

    while(contador > 1){
        numero *= contador;
        contador--;
    }

    cout << numero << endl;

    return(0);
}