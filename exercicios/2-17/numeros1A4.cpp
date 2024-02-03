// Autor: Temasu
// 11/01/2024 18:32
// Este programa mostra na tela os numeros de 1 a 4 de maneiras diferentes

#include<iostream>

int main(){ 
    std::cout << "1 2 3 4\n"; //Imprime todos com apenas uma inserção de fluxo 
    std::cout << "1 " << "2 " << "3 " << "4\n"; // Imprime todos com varias inserções de fluxo
    std::cout << "1 "; //
    std::cout << "2 "; // imprime todos em linhas diferentes
    std::cout << "3 "; //
    std::cout << "4\n"; //

    return(0);
}