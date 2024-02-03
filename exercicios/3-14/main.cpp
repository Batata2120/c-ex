// Autor: Temasu
// 20/01/2024 00:25
// Esse arquivo é responvel por testar a classe Employee
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include "Employee.h"

int main(){
    Employee emprego1("Marcos Leonardo", "Ribeiro dos Santos", 1500);
    Employee emprego2("Mateus", "da Silva", 1800);
    Employee emprego3("Daniel", "Pereia", 2900);

    cout << emprego1.getNome() << " " << emprego1.getSobrenome() << " | Salário: " << emprego1.getSalario() << endl;
    cout << emprego2.getNome() << " " << emprego2.getSobrenome() << " | Salário: " << emprego2.getSalario() << endl;
    cout << emprego3.getNome() << " " << emprego3.getSobrenome() << " | Salário: " << emprego3.getSalario() << endl;
    emprego1.setSalario(-1000);
    cout << emprego1.getNome() << " " << emprego1.getSobrenome() << " | Salário: " << emprego1.getSalario() << endl;
    cout << emprego2.getNome() << " " << emprego2.getSobrenome() << " | Salário: " << emprego2.getSalario() << endl;
    cout << emprego3.getNome() << " " << emprego3.getSobrenome() << " | Salário: " << emprego3.getSalario() << endl;
    
    return(0);
}