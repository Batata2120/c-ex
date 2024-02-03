// Autor: Temasu
// 20/01/2024 00:58
// Esse arquivo faz parte da classe Date, e é responsavel pela interface;
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

class Date{
    public:
        Date(int diaInicial, int mesInicial, int anoInicial);

        void mostrarData();
        
        int getDia();
        int getMes();
        int getAno();

        void setDia(int novoDia);
        void setMes(int novoMes);
        void setAno(int novoAno);
    private:
        int dia;
        int mes;
        int ano;
};