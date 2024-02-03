// Autor: Temasu
// 30/01/2024 12:10
// Este programa mostra os fatoriais de 1 a 5 em tabela
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

int main(){
    long fatorial = 1;

    cout << endl;
    for(int i = 1; i <= 20; i++){
        cout << "Fatorial de " << i << setw(2) << "";
    }

    cout << endl;
    cout << endl;
    for(int i = 1; i <= 20; i++){
        fatorial = 1;
        for(int j = i; j > 1; j--){
            fatorial *= j;
        }
        if(i == 1){
            cout << setw(13) << fatorial;
        }else{
            cout << setw(15) << fatorial;
        }
    }
    cout << endl;
    cout << endl;

    return(0);
}