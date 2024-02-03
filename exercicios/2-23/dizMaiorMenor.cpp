// Autor: Temasu
// 14/01/2024 19:23
// Esse programa recebe 5 numeros, dado esses numeros ele diz o maior e o menor
#include<iostream>
using namespace std;

int main(){
    float numbers[5], sortedNumbers[5];
    int sizeNumbers = 5;

    cout << "Insira 5 numeros: " << endl;
    for(int i = 0; i < sizeNumbers; i++){
        float value = 0;
        cin >> value;
        bool valueExist = false;
        for(int j = 0; j < i; j++){
            if(value == numbers[j]){
                valueExist = true;
            }
        }
        if(!(valueExist)){
            numbers[i] = value;
        }
    }
    
    return(0);
}