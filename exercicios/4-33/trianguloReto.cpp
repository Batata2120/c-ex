// Autor: Temasu
// 30/01/2024 17:10
// Este programa verifica se o triangulo é um triangulo reto
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

    bool flag = false;

    if(primeiroLado > segundoLado && primeiroLado > terceiroLado){
        if((segundoLado * segundoLado) + (terceiroLado * terceiroLado) == (primeiroLado * primeiroLado)){
            flag = true;
        }
    }
    if(segundoLado > primeiroLado && segundoLado > terceiroLado){
        if((primeiroLado * primeiroLado) + (terceiroLado * terceiroLado) == (segundoLado * segundoLado)){
            flag = true;
        }
    }
    if(terceiroLado > segundoLado && terceiroLado > primeiroLado){
        if((segundoLado * segundoLado) + (primeiroLado * primeiroLado) == (terceiroLado * terceiroLado)){
            flag = true;
        }
    }
    if(flag){
        cout << "É um triangulo reto." << endl;
    }else{
        cout << "Não é um triangulo reto." << endl;
    }

    return(0);
}