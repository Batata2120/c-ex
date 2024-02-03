// Autor: Temasu
// 31/01/2024 18:30
// Este programa caucula o lucro de um cara que investiu 24 dolares em 1624.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include<cmath>
using std::pow;

int main(){
    double valorInicial = 24;
    int anos = 2024 - 1624;
    double juros = 5;
    bool inverteJuros = true;

    for(int i = 0; i < anos ; i++){
        cout << pow(1 + (juros / 100), i) << endl;
        valorInicial *= 1 + (juros / 100);
        cout << "O lucro do ano " << i << " é de: " << fixed << setprecision(2) << valorInicial << endl;
        cout << "Juros atual: " << juros << endl;
        if(inverteJuros){
            juros++;
        }else{
            juros--;
        }
        if(juros >= 10){  
            inverteJuros = false;
        }else if(juros <= 5){
            inverteJuros = true;
        }
    }

    return(0);
}