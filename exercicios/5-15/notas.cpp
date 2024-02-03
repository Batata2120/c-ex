// Autor: Temasu
// 30/01/2024 14:08
// Este programa mostra a media das notas inseridas segundo o valor delas;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    double valorTotal = 0;
    int quantidade = 0;
    char digito;

    cout << "Insira as notas(Digite 0 para sair):" << endl;
    while((digito = cin.get()) != '0'){
        
        switch(digito){
            case 'A':
            case 'a':
                valorTotal += 4;
                quantidade++;
                break;  
            case 'B':
            case 'b':
                valorTotal += 3;
                quantidade++;
                break;    
            case 'C':
            case 'c':
                valorTotal += 2;
                quantidade++;
                break;
            case 'D':
            case 'd':
                valorTotal += 1;
                quantidade++;
                break;
            case 'E':
            case 'e':
                valorTotal += 0.5;
                quantidade++;
                break;
            case 'F':
            case 'f':
                valorTotal += 0;
                quantidade++;
                break;
            case ' ':
            case '\n':
            case '\t':
                break;
            default:
                cout << "A letra inserida não é valida." << endl;
        }
    }
    cout << "A média de pontos é:" << valorTotal / quantidade << endl;

    return(0);
}