// Autor: Temasu
// 19/01/2024 22:53
// Esse arquivo faz parte da classe Invoice e é responsavel pela parte da interface
#include<iostream>
using std::cout;
using std::endl;

#include<string>
using std::string;

class Invoice{
    public:
        Invoice(string numeroInicial, string descricaoInicial, int quantidadeInicial, int precoInicial);

        int precoTotal();
        
        string getNumero();
        string getDescricao();
        int getQuantidade();
        int getPreco();
    
        void setNumero(string numeroNovo);
        void setDescricao(string descricaoNova);
        void setQuantidade(int quantidadeNova);
        void setPreco(int precoNovo);
    private:
        string numero;
        string descricao;
        int quantidade;
        int preco;
};