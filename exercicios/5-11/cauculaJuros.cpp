// Autor: Temasu
// 30/01/2024 12:35
// Este programa caucula os juros compostos de 10 anos com diferentes taxas
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

#include<cmath>
using std::pow;

int main(){
    double valorInicial = 1000;

    for(int juros = 5; juros <= 10; juros++){
        for(int i = 1; i <= 10; i++){
            valorInicial = 1000 * pow(1 + (static_cast<double>(juros) / 100), i);
            cout << "O lucro do ano " << i << " é de: " << fixed << setprecision(2) << valorInicial << endl;
        }
    }

    return(0);
}