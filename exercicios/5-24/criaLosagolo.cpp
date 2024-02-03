// Autor: Temasu
// 31/01/2024 16:54
// Este programa imprime um losangolo
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    int tamanho = 0;

    cout << "Insira o tamanho do triangulo: ";
    cin >> tamanho;

    for(int i = 1, j = tamanho / 2; i <= tamanho; i += 2, j--){
        for(int k = 0; k < j; k++){
            cout << " ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = tamanho - 2, j = 1; i >= 1; i -= 2, j++){
        for(int k = 0; k < j; k++){
            cout << " ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }

    return(0);
}