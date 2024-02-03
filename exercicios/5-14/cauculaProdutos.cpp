// Autor: Temasu
// 30/01/2024 13:38
// Este programa caucula o valor gasto segundo a escolha do usuario
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    double valorTotal = 0;
    char digito;

    cout << "Insira os valores(Digite 0 para sair):" << endl;
    while((digito = cin.get()) != '0'){
        int quantidade = 0;
        
        switch(digito){
            case '1':
                cin >> quantidade;
                valorTotal += 2.98 * quantidade;
                break;  
            case '2':
                cin >> quantidade;
                valorTotal += 4.50 * quantidade;
                break;    
            case '3':
                cin >> quantidade;
                valorTotal += 9.98 * quantidade;
                break;
            case '4':
                cin >> quantidade;
                valorTotal += 4.49 * quantidade;
                break;
            case '5':
                cin >> quantidade;
                valorTotal += 6.87 * quantidade;
                break;
            case ' ':
            case '\n':
            case '\t':
                break;
            default:
                cout << "O numero inserido não é valido." << endl;
        }
    }
    cout << "O valor total é:" << valorTotal << endl;

    return(0);
}