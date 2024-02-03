// Autor: Temasu
// 26/01/2024 18:12
// Este programa recebe 10 numeros e mostra o maior deles
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero = 0;
    int contador = 1;
    int maiorNumero = 0;

    cout << "Insira um numero: ";
    cin >> numero;
    maiorNumero = numero;
    
    while(contador < 10){
        cout << "Insira um numero: ";
        cin >> numero;
        if(numero > maiorNumero){
            maiorNumero = numero;
        }
        contador++;
    }
    
    cout << "O maior numero é: " << maiorNumero << endl;

    return(0);
}