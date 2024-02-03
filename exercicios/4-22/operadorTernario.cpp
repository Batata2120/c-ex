// Autor: Temasu
// 27/01/2024 15:43
// Este programa faz testes com o operador ternario
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int linha = 10;
    int coluna = 1;

    while(linha >= 1){
        coluna = 1;
        
        while(coluna <= 10){
            cout << (linha % 2 ? "<" : ">");
            coluna++;
        }
        
        linha--;
        cout << endl;
    }

    return(0);
}