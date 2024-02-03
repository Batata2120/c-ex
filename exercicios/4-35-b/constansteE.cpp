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
    double constanteE = 1;
    double fatorial = 1;

    cout << "Insira a precisão: ";
    cin >> precisao;

    while(contador2 <= precisao){
        contador = contador2;
        numero = contador;

        while(contador > 1){
            contador--;
            numero *= contador;
        }

        constanteE += 1 / numero;
        contador2++;
    }

    cout << setprecision(11) << fixed << constanteE << endl;

    return(0);
}