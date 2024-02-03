// Autor: Temasu
// 28/01/2024 18:37
// Este programa pede um numero e caucula seu fatorial
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

int main(){
    double numero = 0;
    int contador;
    int contador2 = 1;
    int precisao;
    double constanteEX = 1;
    double fatorial = 1;
    int valorElevado;
    int potencia = 1;

    cout << "Insira a precisão: ";
    cin >> precisao;
    cout << "Insira o X: ";
    cin >> valorElevado;

    while(contador2 <= precisao){
        contador = 1;
        potencia = 1;
        numero = contador2;

        while(contador <= contador2){
            potencia *= valorElevado;
            contador++;
        }

        contador--;

        while(contador > 1){
            contador--;
            numero *= contador;
        }

        constanteEX += potencia / numero;
        contador2++;
    }

    cout << setprecision(11) << fixed << constanteEX << endl;

    return(0);
}