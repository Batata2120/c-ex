// Autor: Temasu
// 26/01/2024 18:40
// Esse programa recebe 10 numeros e retorna os dois maiores
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numero = 0;
    int contador = 2;
    int maiorNumero = 0;
    int segundoMaior = 0;

    cout << "Insira um numero: ";
    cin >> numero;
    maiorNumero = numero;
    
    cout << "Insira um numero: ";
    cin >> numero;
    
    if(numero > maiorNumero){
        segundoMaior = maiorNumero;
        maiorNumero = numero;
    }else{
        segundoMaior = numero;
    }
    
    while(contador < 10){
        cout << "Insira um numero: ";
        cin >> numero;
        
        if(numero > maiorNumero){
        segundoMaior = maiorNumero;
        maiorNumero = numero;
        }else if(numero > segundoMaior){
            segundoMaior = numero;
        }
        
        contador++;   
    }

    cout << "O maior numero é: " << maiorNumero << endl;
    cout << "O segundo maior numero é: " << segundoMaior << endl;

    return(0);
}