// Autor: Temasu
// 26/01/2024 16:09
// Esse programa recebe informações de uma conta e diz ao usuario se a conta excedeu o limite
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numeroConta = 0;
    double saldoInicial = 0;
    double saldoFinal = 0;
    double taxas = 0;
    double credito = 0;
    double limite = 0;

    cout << "Insira o numero da conta ou -1 para sair: ";
    cin >> numeroConta;

    while(numeroConta != -1){
        cout << "Insira o saldo inicial: ";
        cin >> saldoInicial;
        cout << "Insira o valor das taxas: ";
        cin >> taxas;
        cout << "Insira o credito: ";
        cin >> credito;
        cout << "Insira o limite: ";
        cin >> limite;
        saldoFinal = saldoInicial + taxas - credito;
        cout << "Novo saldo: " << saldoFinal << endl;
        if(saldoFinal > limite){
            cout << "Conta: " << numeroConta << endl;
            cout << "Limite: " << limite << endl;
            cout << "Saldo: " << saldoFinal << endl;
            cout << "Limite excedido." << endl;
        }
        cout << "Insira o numero da conta ou -1 para sair: ";
        cin >> numeroConta;
    }

    return(0);
}