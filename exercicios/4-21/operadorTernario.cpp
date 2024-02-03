// Autor: Temasu
// 27/01/2024 15:35
// Este programa faz testes com operador ternario
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int contador = 1;
    
    while(contador <= 10){
        cout << (contador % 2 ? "****" : "+++++") << endl;
        
        contador++;
    }

    return(0);
}