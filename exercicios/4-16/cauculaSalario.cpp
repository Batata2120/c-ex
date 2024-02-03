// Autor: Temasu
// 26/01/2024 17:41
// Esse programa recebe o valor de horas e a quantidade de horas trabalhadas e devolve o salario, as horas após 40 horas trabalhadas valem 50 por cento a mais
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include<iomanip>
using std::setprecision;

int main(){
    double salario = 0;
    double horas = 0;
    double valorHora = 0;

    cout << "Insira as horas trabalhadas: ";
    cin >> horas;

    while(horas != -1){
        cout << "Insira o valor da hora: ";
        cin >> valorHora;
        if(horas > 40){
            salario = (40 * valorHora) + ((horas - 40) * valorHora * 1.50);
        }else{
            salario = horas * valorHora;
        }
        cout << "O salário é: " << setprecision(2) << fixed << salario << endl;
        cout << endl;
        cout << "Insira as horas trabalhadas: ";
        cin >> horas;
    }

    return(0);
}