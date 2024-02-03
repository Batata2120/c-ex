// Autor: Temasu
// 26/01/2024 13:37
// Esse programa soma os numeros de um a 10 e mostra a soma em cada etapa;
#include<iostream>
using std::cout;
using std::endl;

int main(){
    int x = 1; // Esse valor vai servir como contador para o nosso while
    int sum = 0; // Essa será a nossa soma
    while(x <= 10){
        sum += x;
        cout << "A soma é: " << sum << endl; // Mostramos a soma atual
        x++;
    }

    return(0);
}