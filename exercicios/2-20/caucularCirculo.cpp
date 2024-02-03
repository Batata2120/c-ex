// Autor: Temasu
// 13/01/2024 17:38
// Este programa pede o raio de um circulo, e com isso caucula seu diametro, sua área e sua circuferencia;
#include<iostream>


int main(){
    float raio; //Onde será armazenado o raio inserido pelo usuario;
    float area; //Aqui será armazenado a área;
    float diametro; //Aqui será armazenado o diametro;
    float circunferencia; //Aqui será armazenado a circunferencia;
    const float PI = 3.14159;

    std::cout << "Insira o raio do círculo: ";
    std::cin >> raio;

    diametro = raio * 2; // Aqui cauculamos o diametro;
    area = PI * raio * raio; // Aqui cauculamos a área;
    circunferencia = 2 * PI * raio; // Aqui cauculamos a circunferencia;
    
    std::cout << "O raio é: " << raio << " cm" <<std::endl; //Aqui mostramos o raio para o usuario
    std::cout << "O diametro é: " << diametro << " cm" << std::endl; //Aqui mostramos o diametro ao usuario
    std::cout << "A circunferencia é: " << circunferencia << " cm" << std::endl; //Aqui mostramos a circuferencia ao usuario;
    std::cout << "A área é: " << area << " cm" << std::endl; //Aqui mostramos a área ao usuario;

    return(0);
}