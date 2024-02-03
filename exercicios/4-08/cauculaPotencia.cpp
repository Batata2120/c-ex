// Autor: Temasu
// 26/01/2024 13:55
// Esse programa recebe dois numeros, a base e o expoente, a partir disso cauculamos a potencia;
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int x; // Base
    int y; // Expoente
    int power = 1; // Potencia
    int i = 1; // Contador

    cout << "Insira um valor positivo: " << endl;
    cin >> x;
    cout << "Insira um valor positivo: " << endl;
    cin >> y;

    while(i <= y){ // A cada iteração ele multiplica o valor de power por x;
        power *= x;
        i++;
    }

    cout << "A potencia dos dois numeros é: " << power << endl;

    return(0);
}