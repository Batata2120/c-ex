// Autor: Temasu
// 28/01/2024 17:25
// Este programa desfaz a criptografia criada no arquivo Criptografia.cpp
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int numeroCriptografado = 0;
    int numeroDescriptografado = 0;
    int contador = 1;
    int potenciaDez = 1;
    int resto;
    int quantidade;
    int contador2 = 0;

    cin >> quantidade;
    cout << quantidade << endl;

    while (contador2 < quantidade) {
        contador = 1;
        potenciaDez = 1;
        numeroDescriptografado = 0;
        cin >> numeroCriptografado;
        
        while(contador <= 4){
            potenciaDez *= 10;

            resto = ((numeroCriptografado % potenciaDez) - (numeroCriptografado % (potenciaDez / 10))) / (potenciaDez / 10); 
            if(contador < 3){
                numeroDescriptografado += ((resto + 3) % 10) * (potenciaDez * 10);
            }else{
                numeroDescriptografado += ((resto + 3) % 10) * (potenciaDez / 1000);
            }

            contador++; 
        }

        cout << numeroDescriptografado << endl;
        contador2++; 
    }
    return(0);
}