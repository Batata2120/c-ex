// Autor: Temasu
// 30/01/2024 17:30
// Este programa converte os numeros decimais para seus respectivos em numeros binarios, octais e hexadecimais
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<iomanip>
using std::setw;

#include<string>
using std::string;
using std::to_string;

int main(){
    string numeroHexadecimal;
    int numero = 0;
    int resto = 0;
    int numeroConvertido = 0;
    int casasDecimais = 0;
    string digito;

    cout << "Decimal" << setw(5) << "" << "Binario" << setw(5) << "" << "Octal" << setw(5) << "" << "Hexadecimal" << endl;
    for(int i = 0; i <= 256; i++){
        numero = i;
        cout << i << setw(12) << "";
        while(numero != 0){
            int base = 2; 
            resto = numero % base;
            for(int i = 1; i <= casasDecimais; i++){
                resto *= 10;
            }
            casasDecimais++;
            numeroConvertido += resto;
            numero = numero / base;
        }
        numero = i;
        cout << numeroConvertido << setw(10 ) << "";
        resto = 0;
        numeroConvertido = 0;
        casasDecimais = 0;
        while(numero != 0){
            int base = 8;
            resto = numero % base;
            for(int i = 1; i <= casasDecimais; i++){
                resto *= 10;
            }
            casasDecimais++;
            numeroConvertido += resto;
            numero = numero / base;
        }
        numero = i;
        cout << numeroConvertido << setw(10) << "";
        resto = 0;
        numeroConvertido = 0;
        casasDecimais = 0;
        while (numero != 0) {
            int base = 16;
            resto = numero % base;
            if (resto == 10) {
                numeroHexadecimal = "A" + numeroHexadecimal;
            } else if (resto == 11) {
                numeroHexadecimal = "B" + numeroHexadecimal;
            } else if (resto == 12) {
                numeroHexadecimal = "C" + numeroHexadecimal;
            } else if (resto == 13) {
                numeroHexadecimal = "D" + numeroHexadecimal;
            } else if (resto == 14) {
                numeroHexadecimal = "E" + numeroHexadecimal;
            } else if (resto == 15) {
                numeroHexadecimal = "F" + numeroHexadecimal;
            } else {
                numeroHexadecimal = to_string(resto) + numeroHexadecimal;
            }
            numero = numero / base;
        }
        numero = i;
        cout << numeroHexadecimal << endl;
        numeroHexadecimal = "";
        resto = 0;
        casasDecimais = 0;
    }


    return(0);
}