// Autor: Temasu
// 02/02/2024 17:24
// Este programa faz o teste de velocidade de funções inline
#include<iostream>
using std::cout;
using std::endl;

#include<ctime>
using std::time;
using std::clock;


int main(){
    double antes;
    double depois;
    double quadradoDeDois;
    int quantidade = 10000;

    cout << quantidade << endl;
    for(int j = 0; j < quantidade; j++){
        antes = clock();
        for(int i = 0; i < 1000000; i++){
            double square = 2;
            square = square * square;
            quadradoDeDois = square;
        }
        depois = clock() - antes;
        cout << depois << endl;
    }

    return(0);
}