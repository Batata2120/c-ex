// Autor: Temasu
// 18/01/2024 21:15
// Essa classe representa uma conta de banco de um cliente
//    public:
//    #     Account(string nomeCliente, string nomeBanco, int agencia, int saldo);
//    #     void depositar(int valor);
//    #         int sacar(int valor); 
//    #     void mudarAgencia(int numero);
//    #     void mostrarSaldo();
//    #     int consultarSaldo();
//    #     void mostrarConta();

//     private:
//         string nomeProprietario;
//         string nomeBanco;
//         int agencia;
//         int saldo;
//
//    #     adicionarSaque(int valor);
//    #     adicionarDeposito(int valor);
//
//    #     string getNomeProprietario();
//    #     string getNomeBanco();
//    #     int getAgencia();
//    #     int getSaldo();
//    #     string getHistoricoTranferencias();
//    #     void setNomeProprietario(string nome);
//    #     void setNomeBanco(string nome);
//    #     void setAgencia(int numero);
//    #     void setSaldo(int valor);
//    #     void setHistoricoTranferencias(string texto);
#include <iostream>
using std::cout;
using std::endl;

#include<ctime>
using std::time_t;
using std::time;
using std::asctime;
using std::localtime;

#include "Account.h"

#include <string>
using std::string;

    // string mensagem = "Tempo atual: ";
    // time_t result = time(nullptr);
    // string tempoAtual = asctime(localtime(&result));
    // mensagem = mensagem + tempoAtual;

Account::Account(string nomeCliente, string nomeBanco, int agencia, int saldo){
    setNomeProprietario(nomeCliente);
    setNomeBanco(nomeBanco);
    setAgencia(agencia);
    setSaldo(saldo);
}

void Account::depositar(int valor){
    if(valor > 0){
        setSaldo(getSaldo() + valor);
        adicionarDeposito(valor);
    }
    if(valor <= 0){
        cout << "Você não pode depositar zero ou numeros negativos!" << endl;
    }
}

int Account::sacar(int valor){
    if(valor <= getSaldo() && valor >= 0){
        setSaldo(getSaldo() - valor);
        adicionarSaque(valor);
        return(valor);
    }
    if(valor > getSaldo()){
        cout << "Você não pode sacar um valor maior do que o que tem na conta!" << endl;
    }
    if(valor < 0){
        cout << "Você não pode sacar valores negativos!" << endl;
    }
    return(-1);
}

void Account::mudarAgencia(int numero){
    if(numero > 0 && numero <= 9999){
        setAgencia(numero);
    }else{
        cout << "A agência inserida é inválida!" << endl;
    }
}

void Account::mostrarSaldo(){
    cout << "O seu saldo atual é: " << getSaldo() << endl;
}

int Account::consultarSaldo(){
    return(getSaldo());
}

void Account::mostrarConta(){
    cout << "Nome do proprietario: " << getNomeProprietario() << "\nNome do banco: " << getNomeBanco() << "\nAgência: " << getAgencia() << "\nSaldo atual: " << getSaldo() << "\n\nHistórico de transfêrencias:\n" << "\n" << getHistoricoTranferencias();
}

void Account::adicionarSaque(int valor){
    string historicoAtual = getHistoricoTranferencias();
    int saldoAntigo = getSaldo() + valor;
    if(getSaldo() >= 0 && valor >= 0){
        string transacao;
        string tipo = "Saque";
        time_t result = time(nullptr);        
        string data = asctime(localtime(&result));
        int saldoAtual = getSaldo();

        transacao = "Saldo atual: " + std::to_string(saldoAtual) + " Saldo antigo: " + std::to_string(saldoAntigo) + " Tipo de transferencia: " + tipo + " Data de transferencia: " + data + "\n";
        
        setHistoricoTranferencias(getHistoricoTranferencias() + transacao);
    }else{
        cout << "A transação não é valida!" << endl;
    }
    
}
void Account::adicionarDeposito(int valor){
        string historicoAtual = getHistoricoTranferencias();
    int saldoAntigo = getSaldo() - valor;
    if(getSaldo() >= 0 && valor >= 0 && saldoAntigo >= 0){
        string transacao;
        string tipo = "Deposito";
        time_t result = time(nullptr);        
        string data = asctime(localtime(&result));
        int saldoAtual = getSaldo();

        transacao = "Saldo atual: " + std::to_string(saldoAtual) + " Saldo antigo: " + std::to_string(saldoAntigo) + " Tipo de transferencia: " + tipo + " Data de transferencia: " + data + "\n";
        
        setHistoricoTranferencias(getHistoricoTranferencias() + transacao);
    }else{
        cout << "A transação não é valida!" << endl;
    }
}

string Account::getNomeProprietario(){
    return(nomeProprietario);
}

string Account::getNomeBanco(){
    return(nomeBanco);
}

int Account::getAgencia(){
    return(agencia);
}

int Account::getSaldo(){
    return(saldo);
}

string Account::getHistoricoTranferencias(){
    return(historicoTranferencias);
}

void Account::setNomeProprietario(string nome){
    if(nome.length() < 25){
        nomeProprietario = nome;
    }else{
        cout << "Nome invalido!" << endl;
    }
}

void Account::setNomeBanco(string nome){
    if(nome.length() < 25){
        nomeBanco = nome;
    }else{
        cout << "Nome de banco invalido!" << endl;
    }
}

void Account::setAgencia(int numero){
    if(numero > 0 && numero <= 9999){
        agencia = numero;
    }else{
        cout << "Nome de agência invalido! Colocando o numero de agência padrão." << endl;
        agencia = 0000;
    }
}

void Account::setSaldo(int valor){
    if(valor >= 0){
        saldo = valor;
    }else{
        cout << "Valor inválido! Colocando valor de saldo padrão" << endl;
        saldo = 0;
    }
}

void Account::setHistoricoTranferencias(string texto){
    historicoTranferencias = texto;
}