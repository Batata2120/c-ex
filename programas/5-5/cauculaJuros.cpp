// Autor: Temasu
// 29/01/2024 15:10
// Este programa caucula e mostra os juros de um investimento de 1000 reais por dez anos
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
    // 1000 * (1 + 1.1335)
    double cauculo = 1 + 13.35;
    double valorInicial = 1000;

    for(int i = 1; i <= 100; i++){
        valorInicial = 5000 * pow(1 + 0.1335, i);
        cout << "O lucro do ano " << i << " é de: " << fixed << valorInicial << endl;
        cauculo *= cauculo;         
    }

    return(0);
}