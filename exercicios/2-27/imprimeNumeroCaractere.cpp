// Autor: Temasu
// 14/01/2024 21:55
// Este programa pede 1 caractere, após isso ele devolve o numero que o c++ usa para representar esse caractere;
#include<iostream>

int main(){
    char caractere;

    std::cout << "Insira um caractere: " << std::endl;
    std::cin >> caractere;
    std::cout << static_cast<int>(caractere) << std::endl; // Aqui imprimimos a conversão do caractere;

    return(0);
}