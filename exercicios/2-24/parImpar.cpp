// Autor: Temasu
// 14/01/2024 19:45
// Este programa recebe um numero e diz se ele é impar ou par;
#include<iostream>

int main(){
    int number; //Aqui será armazenado o numero que o usuario digitar;
    int restoDivisao; //Aqui será armazenado o resto de divisão por 2 desse numero;

    std::cout << "Insira um numero: "; 
    std::cin >> number;

    restoDivisao = number % 2; // Aqui cauculamos e armazenamos o resto de divisão;
    if(restoDivisao == 1)
        std::cout << "Esse numero é impar" << std::endl; //Caso o resto de divisão por 2 for 1 o numero é impar, então dizemos isso ao usuario;
    if(restoDivisao == 0)
        std::cout << "Esse numero é par" << std::endl;  //Caso o resto de divisão por 2 seja 0 o numero é par, então dizemos isso ao usuario;

    return(0);
}