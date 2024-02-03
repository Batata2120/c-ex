// Autor: Temasu
// 31/01/2024 16:43
// Este programa imprime um losangolo
#include<iostream>
using std::cout;
using std::endl;

int main(){
    for(int i = 1, j = 4; i <= 9; i += 2, j--){
        for(int k = 0; k < j; k++){
            cout << " ";
        }
        for(int l = 0; l < i; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 7, j = 1; i >= 1; i -= 2, j++){
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