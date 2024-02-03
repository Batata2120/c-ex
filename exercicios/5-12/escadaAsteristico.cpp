// Autor: Temasu
// 30/01/2024 12:46
// Este programa mostra escadas de asteristicos
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

int main(){
    for(int i = 1, j = 9; i <= 10; i++, j--){
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        for(int l = j; l >= 1; l--){
            cout << " ";
        }
        cout << setw(4) << "";
        for(int l = j + 1; l >= 1; l--){
            cout << "*";
        }
        for(int k = 0; k < i - 1; k++){
            cout << " ";
        }
        cout << setw(4) << "";
        for(int k = 0; k < i - 1; k++){
            cout << " ";
        }
        for(int l = j + 1; l >= 1; l--){
            cout << "*";
        }
        cout << setw(4) << "";
        for(int l = j; l >= 1; l--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }

        cout << endl;
    }
    return(0);
}
