// Autor: Temasu
// 27/01/2024 19:00
// Este programa verifica se os três lados do triangulo podem sim formar um triangulo
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

int main(){
    double primeiroLado;
    double segundoLado;
    double terceiroLado;
    bool varivelFlag = true;

    cout << "Insira o valor do primeiro lado: ";
    cin >> primeiroLado;
    cout << "Insira o valor do segundo lado:";
    cin >> segundoLado;
    cout << "Insira o valor do terceiro lado: " ;
    cin >> terceiroLado;

    if((primeiroLado + segundoLado) < terceiroLado){ 
        varivelFlag = false;
    }
    if((segundoLado + terceiroLado) < primeiroLado){ 
        varivelFlag = false;
    }
    if((terceiroLado + primeiroLado) < segundoLado){ 
        varivelFlag = false;
    }
    if(varivelFlag){
        cout << "Isso forma um triangulo" << endl;
    }else{
        cout << "Isso não forma um triangulo" << endl;
    }
                           
    return(0);
}