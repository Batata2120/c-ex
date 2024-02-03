// Autor: Temasu
// 14/01/2024 21:21
// Este programa pede dois inteiros, a partir disso ele determina se o primeiro numero é multiplo do segundo;
#include<iostream>

int main(){
    int number1; //Esse será a variavel que recebera o primeiro numero, que será o multiplo do segundo
    int number2; //Esse será o segundo numero;

    std::cout << "Insira dois numeros: " << std::endl;
    std::cin  >> number1 >> number2;

    if(number2 > number1){ // Aqui checamos se o segundo numero é maior que o primero, caso não seja o primeiro numero não podera ser o um multiplo;
        if(number2 % number1 == 0){ // Caso o segundo numero for maior, vemos se o primeiro numero é multiplo do segundo, se ele for informamos isso ao usuario;
            std::cout << "O primeiro numero é multiplo do segundo" << std::endl;
        }else{ // Se ele não for, informamos isso ao usuario
            std::cout << "O primeiro numero não é multiplo do segundo" << std::endl;
        }  
    }else{ // Se o segundo numero não for maior, então avisamos isso ao usuario;
        std::cout << "O primero numero é maior que o segundo" << std::endl;
    }

    return(0);
}