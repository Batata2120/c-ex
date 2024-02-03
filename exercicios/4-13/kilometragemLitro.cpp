// Autor: Temasu
// 26/01/2024 15:18
// Este progama recebe a kilometragem e os litros de varios tanques, após isso diz ao usuario a km/litro do tanque e a km/litro de todos os tanques
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
    double kilometragemTotal = 0;
    double litrosTotal = 0;
    double kilometragem = 0;
    double litros = 0;
    int contadorTanque = 0;

    cout << "Insira o valor da kilometragem(-1 para sair): ";
    cin >> kilometragem;
    while(kilometragem != -1){
        cout << "Insira o valor de litros: ";
        cin >> litros;
        kilometragemTotal += kilometragem;
        litrosTotal += litros;
        contadorTanque++;
        cout << "km/litros desse tanque: " << kilometragem/litros << endl;
        cout << "km/litros total: " << kilometragemTotal/litrosTotal << endl; 
        cout << endl;
        cout << "Insira o valor da kilometragem(-1 para sair): ";
        cin >> kilometragem;
    }
    
    cout << endl;
    cout << "Kilometragem total: " << kilometragemTotal << endl;
    cout << "Litros gastos total: " << litrosTotal << endl;
    cout << "km/litros total: " << kilometragemTotal/litrosTotal << endl;
    cout << "Total de tanques:" << contadorTanque << endl;

    return(0);
}