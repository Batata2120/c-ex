// Autor: Temasu
// 19/01/2024 22:50
// Esse arquivo roda e testa as classe Invoice
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include "Invoice.h"

int main(){
    Invoice fatura1("1", "É uma placa de video", 15 , 2500);
    Invoice fatura2("2", "É uma placa", 20 , 500);
    Invoice fatura3("3", "É um processador", 10 , 900);

    cout << fatura1.getNumero() << " | " << fatura1.getDescricao() << " | " << fatura1.getQuantidade() << " | " << fatura1.getPreco() << " | " << fatura1.precoTotal() <<endl;
    cout << fatura2.getNumero() << " | " << fatura2.getDescricao() << " | " << fatura2.getQuantidade() << " | " << fatura2.getPreco() << " | " << fatura2.precoTotal() <<endl;
    cout << fatura3.getNumero() << " | " << fatura3.getDescricao() << " | " << fatura3.getQuantidade() << " | " << fatura3.getPreco() << " | " << fatura3.precoTotal() <<endl;
    fatura1.setPreco(2000);
    fatura2.setQuantidade(57);
    fatura3.setNumero("4");
    cout << fatura1.getNumero() << " | " << fatura1.getDescricao() << " | " << fatura1.getQuantidade() << " | " << fatura1.getPreco() << " | " << fatura1.precoTotal() <<endl;
    cout << fatura2.getNumero() << " | " << fatura2.getDescricao() << " | " << fatura2.getQuantidade() << " | " << fatura2.getPreco() << " | " << fatura2.precoTotal() <<endl;
    cout << fatura3.getNumero() << " | " << fatura3.getDescricao() << " | " << fatura3.getQuantidade() << " | " << fatura3.getPreco() << " | " << fatura3.precoTotal() <<endl;
    

    return(0);
}