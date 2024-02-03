// Autor: Temasu
// 19/01/2024 22:33
// Este programa testas funções da classe Account
#include<iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main(){
    Account conta1("Mario Hernandez", "Bradesco", 0021, 15000);
    Account conta2("Rodrygo Alberto", "Bradesco", 9999, 100000);

    conta1.mostrarConta();
    conta2.mostrarConta();
    conta1.depositar(1000);
    conta1.sacar(5000);
    conta2.depositar(25000);
    conta2.sacar(75000);
    conta1.mostrarConta();
    conta2.mostrarConta();

    return(0);
}