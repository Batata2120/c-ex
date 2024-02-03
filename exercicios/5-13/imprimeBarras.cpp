// Autor: Temasu
// 30/01/2024 13:27
// Este programa imprime varias barras
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    cout << "Insira os numeros: ";
    for(int i = 0; i < 5; i++){
        int quantidade;
        cin >> quantidade;
        for(int j = 0; j < quantidade; j++){
            cout << "*";
        }
        cout << endl;
    }

    return(0);
}
