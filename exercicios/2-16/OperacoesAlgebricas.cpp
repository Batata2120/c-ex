//Autor: Temasu
//11/01/2024 18:18
//Este programa pede dois numeros, dado os dois numeros ele executa 4 operações algebricas com eles: 
//Soma, Diferença, Multiplicação e Divisão, depois mostra isso na tela;

#include<iostream> //Importa a biblioteca padrão de entrada e saída

int main(){ // Inicia o programa
    int number1; // Primeiro numero inserido
    int number2; // Segundo numero inserido

    std::cout << "Insira dois numeros:\n"; // Pede dois numeros ao usuario 
    std::cin >> number1 >> number2; // Coloca os valores inseridos pelo usuario nas variaveis number1 e number2
    std::cout << "Soma: " << number1 + number2 << std::endl; //Mostra a soma ao usuario 
    std::cout << "Produto: " << number1 * number2 << std::endl; //Mostra o produto ao usuario
    std::cout << "Diferença: " << number1 - number2 << std::endl; //Mostra a diferença ao usuario
    std::cout << "Quociente: " << number1 / number2 << std::endl; //Mostra o quociente ao usuario
    return(0);
}