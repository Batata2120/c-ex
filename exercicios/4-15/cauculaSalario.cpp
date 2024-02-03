// Autor: Temasu
// 26/01/2024 16:53
// Este programa caucula o salario de um funcionario que ganha grande parte do seu salario em comissão
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

int main(){
    double salarioBase = 200;
    double salario = 0;
    double vendas = 0;

    cout << "Insira o valor das vendas: ";
    cin >> vendas;

    while(vendas != -1){
        salario = salarioBase + (vendas * 0.09);
        cout << "Salario: " << setprecision(2) << fixed << salario << endl;
        cout << endl;
        cout << "Insira o valor das vendas: ";
        cin >> vendas;
    }

    return(0);
}