// Autor: Temasu
// 18/01/2024 21:15
// Essa classe representa uma conta de banco de um cliente
#include <string>
using std::string;

class Account{
    public:
        Account(string nomeCliente, string nomeBanco, int agencia, int saldo);
        void depositar(int valor);
        int sacar(int valor);
        void mudarAgencia(int numero);
        void mostrarSaldo();
        int consultarSaldo();
        void mostrarConta();

    private:
        string nomeProprietario;
        string nomeBanco;
        string historicoTranferencias;
        int agencia;
        int saldo;

        void adicionarSaque(int valor);
        void adicionarDeposito(int valor);

        string getNomeProprietario();
        string getNomeBanco();
        int getAgencia();
        int getSaldo();
        string getHistoricoTranferencias();

        void setNomeProprietario(string nome);
        void setNomeBanco(string nome);
        void setAgencia(int numero);
        void setSaldo(int valor);
        void setHistoricoTranferencias(string texto);
};