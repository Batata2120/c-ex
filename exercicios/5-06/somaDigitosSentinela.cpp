// Autor: Temasu
// 29/01/2024 18:59
// Este programa soma numeros até receber o sentinela 9999;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

int main(){
    double sum = 0;
    int contador = 0;

    cout << "Insira os numeros a serem somados(e 9999 quando quiser mostrar o resultado): " << endl;
    
    for(int numeroAtual = 0; numeroAtual != 9999;){
        cin >> numeroAtual;
        
        if(numeroAtual != 9999){
            sum += numeroAtual;
            contador++;
        }    
    }

    cout << "A média é: " << fixed << setprecision(3) << sum / contador << endl;

    return(0);
}