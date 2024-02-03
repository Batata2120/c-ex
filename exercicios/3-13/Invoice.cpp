// Autor: Temasu
// 19/01/2024 22:52
// Essa arquivo faz parte da classe Invoice e faz a implementação dessa classe
// public:
//     int precoTotal();
//
//     Invoice(string numero, string descricao, int quantidade, int preco);
//
//     string getNumero();
//     string getDescricao();
//     int getQuantidade();
//     int getPreco();

//     void setNumero(string numeroNovo);
//     void setDescricao(string descricaoNova);
//     void quantidade(int quantidadeNova);
//     void preco(int precoNovo);
// private:
//     string numero;
//     string descricao;
//     int quantidade;
//     int preco;
#include<iostream>

#include<string>
using std::string;

#include "Invoice.h"

Invoice::Invoice(string numeroInicial, string descricaoInicial, int quantidadeInicial, int precoInicial){
    setNumero(numeroInicial);
    setDescricao(descricaoInicial);
    setQuantidade(quantidadeInicial);
    setPreco(precoInicial);
}

int Invoice::precoTotal(){
    return(getQuantidade() * getPreco());
}

string Invoice::getNumero(){
    return(numero);
}

string Invoice::getDescricao(){
    return(descricao);
}

int Invoice::getQuantidade(){
    return(quantidade);
}

int Invoice::getPreco(){
    return(preco);
}

void Invoice::setNumero(string numeroNovo){
    numero = numeroNovo;
}

void Invoice::setDescricao(string descricaoNova){
    descricao = descricaoNova;
}

void Invoice::setQuantidade(int quantidadeNova){
    if(quantidadeNova >= 0){
        quantidade = quantidadeNova;
    }
}

void Invoice::setPreco(int precoNovo){
    if(precoNovo >= 0){
        preco = precoNovo;
    }
}