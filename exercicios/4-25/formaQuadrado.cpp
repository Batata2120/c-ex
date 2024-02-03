// Autor: Temasu
// 27/01/2024 16:14
// Este programa pede dois numeros e forma um quadrado com eles.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int comprimento = 0;
    int largura = 0;
    int contadorComprimento = 1;
    int contadorLargura = 1;

    cout << "Insira o comprimento: ";
    cin >> comprimento;
    cout << "Insira a largura: ";
    cin >> largura;

    while(contadorComprimento <= comprimento){
        cout << "*" ;
        contadorComprimento++;
    }

    contadorComprimento = 1;
    cout << endl;

    while(contadorLargura <= (largura - 2)){
        contadorComprimento = 1;
        cout << "*";
        while(contadorComprimento <= (comprimento - 2)){
            cout << " ";
            contadorComprimento++;
        }
        cout << "*";
        cout << endl;
        contadorLargura++;
    }

    contadorComprimento = 1;

    while(contadorComprimento <= comprimento){
        cout << "*" ;
        contadorComprimento++;
    }

    cout << endl;
}