// Autor: Temasu
// 31/01/2024 15:35
// Este programa caucula os salario dos empregados.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    double valorTotalGerente = 0;
    double valorTotalProducao = 0;
    double valorTotalHoristas = 0;
    double valorTotalComissados = 0;
    int digito = 0;

    cout << "0 - Sair\n1 - Salario do gerente\n2 - Salario de produtor\n3 - Salario de comissarios\n4 - Salario de horista\n5 - Mostrar menu" << endl;

    while((digito = cin.get()) != '0'){
        double salario = 0;
        double valor = 0;
        double quantidade = 0;
        double horas = 0;
        switch(digito){
            case '1':
                cout << "Insira o salario do gerente: ";
                cin >> salario;
                valorTotalGerente += salario;
                break; 
            case '2':
                valor = 0;
                quantidade = 0;
                cout << "Insira o valor que o funcionario recebe por item produzido: ";
                cin >> valor;
                cout << "Insira quantos itens ele vendeu: ";
                cin >> quantidade;
                salario = valor * quantidade;
                valorTotalProducao += salario;
                break;
            case '3':
                valor = 0;
                cout << "Insira o valor de vendas do comissionado: ";
                cin >> valor;
                salario = 250 + (valor * 0.057);
                valorTotalComissados += salario;
                break;
            case '4':
                horas = 0;
                valor = 0;
                cout << "Insira as horas trabalhadas do funcionario: ";
                cin >> horas;
                cout << "Insira o valor por hora do funcionario: ";
                cin >> valor;
                if(horas <= 40){
                    salario = horas * valor;
                }else{
                    salario = (40 * valor) + ((horas - 40) * (valor * 1.5));
                }
                valorTotalHoristas += salario;
                break;
            case '5':
                cout << "0 - Sair\n1 - Salario do gerente\n2 - Salario de produtor\n3 - Salario de comissarios\n4 - Salario de horista\n5 - Mostrar menu" << endl;
                break;
            case ' ':
            case '\n':
            case '\t':
                break;
            default:
                cout << "O valor inserido não é valido." << endl;
                break;
        }
    }

    cout << "Valor total: " << valorTotalComissados + valorTotalGerente + valorTotalHoristas + valorTotalProducao << endl;
    cout << "Valor gasto com comissados: " << valorTotalComissados << endl;
    cout << "Valor gasto com gerentes:   " << valorTotalGerente << endl;
    cout << "Valor gasto com horistas:   " << valorTotalHoristas << endl;
    cout << "Valor gasto com produtores: " << valorTotalProducao << endl;

    return(0);
}