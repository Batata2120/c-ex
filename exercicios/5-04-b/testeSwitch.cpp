// Autor: Temasu
// 29/01/2024 18:10
// Este programa testa um switch sem break
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n = 0;

    switch(n){
        case 0:
            cout << "O valor é 0!" << endl;
        case 2:
            cout << "O valor é 2!" << endl;
        default:
            cout << "O valor é ?!" << endl;
    }
    cout << "Banana" << endl;

    return(0);
}