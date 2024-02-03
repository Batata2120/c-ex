// Autor: Temasu
// 27/01/2024 16:40
// Este programa recebe um numero de 5 digitos e checa se o numero é um palimdramo
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero = 0;
    int primeiroDigito;
    int segundoDigito;
    int terceiroDigito;
    int quartoDigito;
    int quintoDigito;
    int numeroFinal = 0;

    cout << "Insira um numero de 5 digitos: ";
    cin >> numero;

    primeiroDigito = (numero % 10) * 10000;
    segundoDigito = ((numero % 100) - numero % 10) * 100;
    terceiroDigito = ((numero % 1000) - numero % 100);
    quartoDigito = ((numero % 10000) - numero % 1000) / 100;
    quintoDigito = ((numero % 100000) - numero % 10000) / 10000;
    numeroFinal = primeiroDigito + segundoDigito + terceiroDigito + quartoDigito + quintoDigito;

    cout << "Numero inicial: " << numero << "\nNumero final: " << numeroFinal << endl;
    
    if(numero == numeroFinal){
        cout << "É um palimdromo!" << endl;
    }else{
        cout << "Não é um palimdromo!" << endl;
    }

    return(0);
}