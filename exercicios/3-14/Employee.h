// Autor: Temasu
// 20/01/2024 00:24
// Esse arquivo é responsavel pela parte da interface da classe Employee
#include<string>
using std::string;

class Employee{
    public:
        Employee(string nomeInicial, string sobrenomeInicial, int salarioInicial);

        string getNome();
        string getSobrenome();
        int getSalario();

        void setNome(string novoNome);
        void setSobrenome(string novoSobrenome);
        void setSalario(int novoSalario);
    private:
        string nome;
        string sobrenome;
        int salario;
};