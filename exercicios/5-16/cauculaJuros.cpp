// Autor: Temasu
// 30/01/2024 14:18
// Este programa caucula os juros usando numeros inteiros
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
        for(int i = 1, casasDecimais = 2; i <= 10; i++, casasDecimais += 2){
            valorInicial = 1000 * pow(100 + juros , i);
            cout << "O lucro do ano " << i << " é de: " << fixed << setprecision(2) << (valorInicial / pow(10, casasDecimais))  << endl;
        }
    }
    // double valorAVirarInteiro = 0.232334;
    // int valorTruncado = static_cast<int>(valorAVirarInteiro);
    // double parteDecimal = valorAVirarInteiro - valorTruncado;
    // int casasDecimais = 0;
    // while( parteDecimal < 1 && parteDecimal > 0){
    //     valorAVirarInteiro *= 10;
    //     valorTruncado = static_cast<int>(valorAVirarInteiro);
    //     parteDecimal = valorAVirarInteiro - valorTruncado;
    //     casasDecimais++;
    // }
    // cout << "Valor inteiro: " << valorAVirarInteiro << " Quantidade de casas decimais: " << casasDecimais << " Numero decimal: " << (valorAVirarInteiro / (pow(10, casasDecimais))) << endl;

    return(0);
}