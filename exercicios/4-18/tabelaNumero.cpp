// Autor: Temasu
// 26/01/2024 18:27
// Este programa imprime uma tabela usando o caracte de tabulação, uma tabela que mostra os valores multiplicados por potencias de 10
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int contador = 1;
    
    cout << "N\tN*10\tN*100\tN*1000" << endl;
    cout << endl;

    while(contador <= 5){
        cout << contador << "\t" << contador * 10 << "\t" << contador * 100 << "\t" << contador * 1000 << endl;
        contador++;
    }

    return(0);
}