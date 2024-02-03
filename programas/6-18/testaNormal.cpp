// Autor: Temasu
// 02/02/2024 17:25
// Este programa faz o teste de velocidade de funções inline
#include<iostream>
using std::cout;
using std::endl;

#include<ctime>
using std::time;
using std::clock;

double squareOfTwo(){
    double square = 2;
    square = square * square;
    return(square);
}

int main(){
    double antes;
    double depois;
    double quadradoDeDois;
    int quantidade = 10000;

    cout << quantidade << endl;
    for(int j = 0; j < quantidade; j++){
        antes = clock();
        quadradoDeDois;
        for(int i = 0; i < 1000000; i++){
            quadradoDeDois = squareOfTwo();
        }
        depois = clock() - antes;
        cout << depois << endl;
    }

    return(0);
}