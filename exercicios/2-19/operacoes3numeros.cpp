// Autor: Temasu
// 11/01/2024 19:13
// Este programa pede 3 numeros e calcula a soma, a media e o 
// produto dos três, depois disso ele caucula o menor e o maior e 
// mostra ao usuario;

#include<iostream>

int main(){
    int number1; 
    int number2;
    int number3;
    int soma; //Onde será armazenado a soma dos três numeros;
    int media; //Onde será armazenado a média dos três numeros;
    int maior; //Onde será armazenado o maior numero;
    int menor; //Onde será armazenado o menor numero;
    std::cout << "Insira três numeros: "; //Pede os três numeros ao usuario;
    std::cin >> number1 >> number2 >> number3; //Coloca eles em suas respectivas variaveis;
    
    soma = number1 + number2 + number3; // Atribui o valor da soma dos três numeros a variavel soma;
    media = (number1 + number2 + number3) / 3; // Calcula a média dos três numeros e atribui a variavel media;

    if(number1 > number2 && number1 > number3){ // Checa se o primero numero inserido é o maior
        maior = number1;
    }
    if(number2 > number1 && number2 > number3){ // Checa se o segundo numero inserido é o maior
        maior = number2;
    }
    if(number3 > number1 && number3 > number2){ // Checa se o terceiro numero inserido é o maior
        maior = number3;
    }
    if(number1 < number2 && number1 < number3){ // Checa se o primero numero inserido é o menor
        menor = number1;
    }
    if(number2 < number1 && number2 < number3){ // Checa se o segundo numero inserido é o menor
        menor = number2;
    }
    if(number3 < number1 && number3 < number2){ // Checa se o terceiro numero inserido é o menor
        menor = number3;
    }
    if(number3 == number1  && number1 == number2){ // Checa se todos os numeros são iguais
        menor = number3;
        maior = number1;
    }
    
    std::cout << "Soma: " << soma << std::endl; // Mostra o valor da soma;
    std::cout << "Média: " << media << std::endl; // Mostra o valor da média;
    if(number1 == number2 == number3)
        std::cout << "Todos os numeros são iguais: " << std::endl; // Avisa se todos os numeros são iguais;
    std::cout << "Maior: " << maior << std::endl; // Mostra o maior numero;
    std::cout << "Menor: " << menor << std::endl; // Mostra o menor numero;

    return(0);
}