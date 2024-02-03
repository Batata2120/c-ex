// Autor: Temasu
// 19/01/2024 07:40
// Este programa faz testes com a biblioteca ctime
#include<ctime>
using std::time_t;
using std::time;
using std::asctime;
using std::localtime;

#include<iostream>
using std::cout;

#include<string>
using std::string;

int main(){
    string mensagem = "Tempo atual: ";
    time_t result = time(nullptr);
    string tempoAtual = asctime(localtime(&result));
    mensagem = mensagem + tempoAtual;
    
    cout << mensagem;
}