// Autor: Temasu
// 14/01/2024 22:09
// Este programa pede um numero de cinco digitos, a partir disso ele calcula os algarismos do numero e retorna ao usuario;
#include<iostream>

int main(){
    int numeroRecebido; 
    int primeiroAlgarismo; 
    int segundoAlgarismo;
    int terceiroAlgarismo;
    int quartoAlgarismo;
    int quintoAlgarismo;

    std::cout << "Insira um numero de 5 digitos: " << std::endl;
    std::cin >> numeroRecebido;

    primeiroAlgarismo = numeroRecebido % 10; // Aqui cauculamos o primeiro algarismo
    segundoAlgarismo = ((numeroRecebido % 100) - (numeroRecebido % 10)) / 10; // Aqui cauculamos o segundo algarismo
    terceiroAlgarismo = ((numeroRecebido % 1000) - (numeroRecebido % 100)) / 100; // Aqui cauculamos o terceiro algarismo
    quartoAlgarismo = ((numeroRecebido % 10000) - (numeroRecebido % 1000)) / 1000; // Aqui cauculamos o quarto algarismo
    quintoAlgarismo = ((numeroRecebido % 100000) - (numeroRecebido % 10000)) / 10000; // Aqui cauculamos o quinto algarismo

    std::cout << "Os digitos são: " << quintoAlgarismo << " " << quartoAlgarismo << " " << terceiroAlgarismo << " " << segundoAlgarismo << " " << primeiroAlgarismo << std::endl;
    
    return(0);
}