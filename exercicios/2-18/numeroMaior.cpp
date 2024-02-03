// Autor: Temasu
// 11/01/2024
// O programa vê qual o maior o numero e diz ao usuario, caso os numeros sejam iguais ele diz que são iguais;

#include<iostream>


int main(){
    int number1; // Cria a variavel que armazena o primeiro numero;
    int number2; // Cria a variavel que armazena o segundo numero;

    std::cout << "Insira dois numeros: " << std::endl; // Pede os dois numeros;
    std::cin >> number1 >> number2; // Coloca os numeros inseridos pelo usuario nas suas respectivas variaveis
    if(number1 > number2) std::cout << "O numero " << number1 << " é maior que o numero " << number2 << std::endl; // Checa se o numero 1 é maior que o numero 2, e se for fala isso ao usuario
    if(number2 > number1) std::cout << "O numero " << number2 << " é maior que o numero " << number1 << std::endl; // Checa se o numero 2 é maior que o numero 1, e se for fala isso ao usuario 
    if(number1 == number2) std::cout << "O numero " << number1 << " é igual ao numero " << number2 << std::endl; // Checa se os numeros são iguais e se forem fala isso ao usuario
    
    return(0);
}