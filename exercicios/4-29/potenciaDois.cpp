// Autor: Temasu
// 27/01/2024 16:21
// Este programa imprime infinitamente a potencia de 2
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    long potencia = 1;
    int contador = 1;
    
    while(contador <= 100){
        cout << potencia << endl;
        potencia *= 2;
        contador++;
    }

    return(0);
}