// Autor: Temasu
// 20/01/2024 00:56
// Esse arquivo faz parte da classe Date, e ela é responsavel pela implementação da classe;
    // public:
    //     Date(int diaInicial, int mesInicial, int anoInicial);
    //
    //     void mostrarData();
    //  
    //     int getDia();
    //     int getMes();
    //     int getAno();
    //
    //     void setDia(int novoDia);
    //     void setMes(int novoMes);
    //     void setAno(int novoAno);
    // private:
    //     int dia;
    //     int mes;
    //     int ano;
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

#include "Date.h"

Date::Date(int diaInicial, int mesInicial, int anoInicial){
    setDia(diaInicial);
    setMes(mesInicial);
    setAno(anoInicial);
}

void Date::mostrarData(){
    cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}

int Date::getDia(){
    return(dia);
}

int Date::getMes(){
    return(mes);
}

int Date::getAno(){
    return(ano);
}

void Date::setDia(int novoDia){
    if(novoDia >= 1 && novoDia <= 31){
        dia = novoDia;
    }else{
        dia = 01;
        cout << "Dia invalido!" << endl;
    }
}

void Date::setMes(int novoMes){
    if(novoMes >= 1 && novoMes <= 12){
        mes = novoMes;
    }else{
        mes = 01;
        cout << "Mês invalido!" << endl;
    }
}

void Date::setAno(int novoAno){
    if(novoAno >= 0){
        ano = novoAno;
    }else{
        ano = 2000;
        cout << "Ano invalido!" << endl;
    }
}