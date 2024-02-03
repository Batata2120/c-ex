// Autor: Temasu
// 15/01/2024 16:47
// Este programa cria a classe gradeBook e coloca uma função membro nela que exibe uma mensagem, após isso ele usa a função main para executar ela;
#include<iostream>
using std::cout;
using std::endl;
using std::cin;

#include<string>
using std::string;
using std::getline;

class GradeBook{ // Inicia a classe GradeBook
    public:
        GradeBook(string nomeCurso){
            setNomeCurso(nomeCurso);
        }
        void setNomeCurso(string nome){ // Essa função recebe um argumento e faz dele o nome do curso
            nomeCurso = nome;
        }
        string getNomeCurso(){ // Essa função retorna o nome do curso
            return(nomeCurso);
        }
        void displayMessage(){ // Cria a função-membro displayMessage e pede um parametro para execução
            cout <<  "Bem vindo ao caderno de notas!!!\n" << "O nome do seu curso é: " << getNomeCurso() << endl; //Execução da função
        }// Fim da função displayMessage
    private:
        string nomeCurso; // Esse atributo é o nome do curso, e só pode ser acessado por funções dentro da classe
}; // Fim da classe GradeBook

int main(){ //Inicia a função main
    GradeBook myGradeBook("Introdução a c++"); // Cria um objeto GradeBook
    GradeBook myGradeBook2("Estrutura de dados em c++");

    //cout << "Insira o nome do curso: " << endl; // Pede o nome do curso ao usuario
    //getline(cin, nomeCurso); // A função getline usa a função cin para receber dados da entrada padrão e armazenar na variavel 'nomeCurso', o caractere defino padrão é o de nova linha;
    //myGradeBook.setNomeCurso(nomeCurso); // Setamos o nome do curso para o nome que foi inserido pelo usúario
    myGradeBook.displayMessage(); // Usa a função membro displayMessage, e envia o parametro para ela de nome do curso
    myGradeBook2.displayMessage();

    return(0);
}