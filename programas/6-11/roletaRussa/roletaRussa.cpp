// Autor: Temasu
// 01/02/2024 18:52
// Este programa simula um jogo de roleta russa
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<cstdlib>
using std::rand;
using std::srand;

#include<iomanip>
using std::setprecision;

#include<ctime>
using std::time;

int roletar();

int main(){
    srand(time(0));

    int tamborDaBala = ((rand() % 6) + 1);
    int tamborAtual = roletar();
    double quantidadeInicial = 0;
    double porcentagem = 4.0/100;
    int continuar = 2;
    enum Status {VIVO, MORTO};
    Status vida = VIVO;

    cout << "Insira o valor inicial: ";
    cin >> quantidadeInicial;

    while ((vida == VIVO) && (continuar == 2)){
        if(tamborAtual == tamborDaBala){
            cout << "Você morreu." << endl;
            cout << "Valor final: " << quantidadeInicial << endl;
            vida = MORTO;
        }else{
            cout << "Você sobreviveu." << endl;
            porcentagem *= 2;
            quantidadeInicial *= (1 + porcentagem);
            cout << "Valor atual: " << fixed << setprecision(2) << quantidadeInicial << endl;
            cout << "Deseja continuar?(1 para não, 2 para sim)" << endl;
            cin >> continuar;
            tamborAtual = roletar();
        }
    }
    if(continuar == 1){
        cout << "Você ganhou: " << fixed << setprecision(2) <<quantidadeInicial << endl;
        cout << "Você saiu!" << endl;
    }

    return(0);
}
int roletar(){
    return(1 + (rand() % 6));
}
