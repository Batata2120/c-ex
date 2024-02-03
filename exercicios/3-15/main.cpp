// Autor: Temasu
// 20/01/2024 01:34
// Esse arquivo testa a classe Date
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include "Date.h"

int main(){
    Date data1(31,12,0000);
    Date data2(01,01,999999);
    Date data3(-1,13,-1000);

    data1.mostrarData();
    data2.mostrarData();
    data3.mostrarData();

    return(0);
}