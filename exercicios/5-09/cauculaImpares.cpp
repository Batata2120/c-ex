// Autor: Temasu
// 29/01/2024 19:40
// Este programa caucula os impares de 1 a 15
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int produto = 1;
    
    for(int i = 1; i <= 15; i += 2){
        produto *= i;        
    }
    cout << "O produto é:" << produto << endl;

    return(0);
}