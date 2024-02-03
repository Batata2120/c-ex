// Autor: Temasu
// 31/01/2024 13:13
// Este programa faz alguns testes com a variavel char
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;
using std::to_string;

int main(){
    string numeroHexadecimal;
    int resto = 0;
    int numero = 1000;
    int casasDecimais = 0;
    string digito;
    for(int i = 0; i <= 256; i++){
        numero = i;
        while(numero != 0){
            int base = 16;
            resto = numero % base;
            if(resto == 10){
                numeroHexadecimal = "A" + numeroHexadecimal;
            }else if(resto == 11){
                numeroHexadecimal = "B" + numeroHexadecimal;
            }else if(resto == 12){
                numeroHexadecimal = "C" + numeroHexadecimal;
            }else if(resto == 13){
                numeroHexadecimal = "D" + numeroHexadecimal;
            }else if(resto == 14){
                numeroHexadecimal = "E" + numeroHexadecimal;
            }else if(resto == 15){
                numeroHexadecimal = "F" + numeroHexadecimal;
            }else{
                numeroHexadecimal = to_string(resto) + numeroHexadecimal;
            }
            numero = numero / base;
        }
        cout << numeroHexadecimal << endl;
        resto = 0;
        numeroHexadecimal = ""; 
    }

    return(0);
}