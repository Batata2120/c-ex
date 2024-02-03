// Autor: Temasu
// 27/01/2024 18:07
// Este programa imprime um tabulerio apenas usando 3 tipos de entrada e while;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int contadorLinhas = 1;
    int contadorColunas = 1;
    int linhas = 11;
    int colunas = 16;

    while(contadorLinhas <= linhas){
        contadorColunas = 1;

        while(contadorColunas <= colunas){
            if(contadorLinhas % 2 == 1){
                cout << (contadorColunas % 2 ? "*": " ");
            }else{
                cout << (contadorColunas % 2 ? " ": "*");
            }
            contadorColunas++;
        }
        cout << endl;

        contadorLinhas++;
    }

    return(0);
}