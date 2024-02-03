// Autor: Temasu
// 27/01/2024 18:53
// Este programa pede o raio de um circulo, e com isso caucula seu diametro, sua área e sua circuferencia;
#include<iostream>
using std::fixed;

#include<iomanip>
using std::setprecision;


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
    
    std::cout << "O raio é: " << setprecision(2) << fixed << raio << " cm" <<std::endl; //Aqui mostramos o raio para o usuario
    std::cout << "O diametro é: " << setprecision(2) << fixed << diametro << " cm" << std::endl; //Aqui mostramos o diametro ao usuario
    std::cout << "A circunferencia é: " << setprecision(2) << fixed << circunferencia << " cm" << std::endl; //Aqui mostramos a circuferencia ao usuario;
    std::cout << "A área é: " << setprecision(2) << fixed << area << " cm" << std::endl; //Aqui mostramos a área ao usuario;

    return(0);
}