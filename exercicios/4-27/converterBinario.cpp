// Autor: Temasu
// 27/01/2024 17:16
// Este programa recebe um numero binario e converte ele para um numero decimal;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numeroBinario = 0;
    int resto = 0;
    int potenciaDecimal = 1;
    int potenciaBinaria = 1;
    int numeroDecimal = 0;

    cout << "Insira o numero binario: ";
    cin >> numeroBinario;
    

    while(numeroBinario % potenciaDecimal != numeroBinario){
        potenciaDecimal *= 10;
        resto = ((numeroBinario % potenciaDecimal) - (numeroBinario % (potenciaDecimal / 10))) / (potenciaDecimal / 10);
        numeroDecimal += resto * potenciaBinaria;
        potenciaBinaria *= 2;
    }

    cout << numeroBinario << " -- " << numeroDecimal; 

    cout << endl;
    
    return(0);
}