// Autor: Temasu
// 02/01/2024 14:51
// Este programa simula um jogo de azar chamado craps
#include<iostream>
using std::cout;
using std::endl;

#include<cstdlib>
using std::srand;
using std::rand;

#include<ctime>
using std::time;

int rolarDados();

int main(){
    enum Status {CONTINUAR, VENCEU, PERDEU};

    int meusPontos;
    Status gameStatus;

    srand(time(0));

    int sumOfDice = rolarDados();

    switch(sumOfDice){
        case 7:
        case 11:
            gameStatus = VENCEU;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = PERDEU;
        default:
            gameStatus = CONTINUAR;
            meusPontos = sumOfDice;
            cout << "Pontuação: " << meusPontos << endl;
            break;
    }

    while(gameStatus == CONTINUAR){
        sumOfDice = rolarDados();
        
        if(sumOfDice == meusPontos){
            gameStatus = VENCEU;
        }else if(sumOfDice == 7){
            gameStatus = PERDEU;
        }
    }

    if(gameStatus == VENCEU){
        cout << "Você venceu!" << endl;
    }else{
        cout << "Você perdeu!" << endl;
    }

    return(0);
}

int rolarDados(){
    return(2 +((rand() % 6) + (rand() % 6)));
}