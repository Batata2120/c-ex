// Autor: Temasu
// 20/01/2024 00:23
// Esse arquivo é responsavel pela implementação da classe Employee
// public:
//     Employee(string nomeInicial, string sobrenomeInicial, int salarioInicial);
//
//     string getNome();
//     string getSobrenome();
//     int getSalario();
//
//     void setNome(string novoNome);
//     void setSobrenome(string novoSobrenome);
//     void setSalario(int novoSalario);
// private:
//     string nome;
//     string sobrenome;
//     int salario;
#include<string>
using std::string;

#include<iostream>
using std::cout;
using std::endl;

#include "Employee.h"

Employee::Employee(string nomeInicial, string sobrenomeInicial, int salarioInicial){
    setNome(nomeInicial);
    setSobrenome(sobrenomeInicial);
    setSalario(salarioInicial);
}

string Employee::getNome(){
    return(nome);
}

string Employee::getSobrenome(){
    return(sobrenome);
}

int Employee::getSalario(){
    return(salario);
}

void Employee::setNome(string novoNome){
    nome = novoNome;
}

void Employee::setSobrenome(string novoSobrenome){
    sobrenome = novoSobrenome;
}

void Employee::setSalario(int novoSalario){
    if(novoSalario >= 0){
        salario = novoSalario;
    }else{
        salario = 0;
        cout << "O salario inserido é negativo!" << endl;
    }
}