// Autor: Temasu
// 31/01/2024 14:37
// Este programa faz o cauculo de pi a partir de uma serie
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main(){
    double pi = 4;
    bool sinal = false;

    for(int i = 0, j = 3; i < 10000000; i++, j += 2){
        if(sinal){
            pi += 4 / static_cast<double>(j);
        }else{
            pi -= 4 / static_cast<double>(j);
        }
        sinal = !(sinal);
        
        cout << "Numero atual: " << i << endl;
        cout << "O valor de PI é: " << fixed << pi << endl;
    }

    return(0);
}