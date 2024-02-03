// Autor: Temasu
// 27/01/2024 15:06
// Este arquivo faz parte da classe Analise, e é responsavel pela implementação da classe
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Analise.h"

void Analise::processarResultados(){
    int passou = 0;
    int reprovou = 0;
    int numeroAlunos = 1;
    int resultado;

    while(numeroAlunos <= 10){
        resultado = 0;
        while(resultado != 1 && resultado != 2){
            cout << "Coloque o resultado(1 para passou e 2 para reprovou): ";
            cin >> resultado;
            if(resultado != 1 && resultado != 2){
                cout << "Insira um valor válido!" << endl;
            }
        }
        if(resultado == 1){
            passou += 1;
        }else{
            reprovou += 1;
        }

        numeroAlunos += 1;
    }

    cout << "Aprovados: " << passou << "\nReprovados: " << reprovou << endl;

    if(passou > 8){
        cout << "Aumente o valor da matricula" << endl;
    }
}