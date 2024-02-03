// Autor: Temasu
// 19/01/2024 21:14
// Este programa contém a classe GradeBook
#include<iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string nome, string nomeProfessor){ // Construtor da classe
    setNomeCurso(nome);
    setNomeInstrutor(nomeProfessor);
}
        
string GradeBook::getNomeCurso(){
    return(nomeCurso);
}

string GradeBook::getNomeInstrutor(){
    return(nomeInstrutor);
}

void GradeBook::setNomeInstrutor(string nome){
    if(nome.length() <= 25){
        nomeInstrutor = nome;
    }
    if(nome.length() > 25){
        nomeInstrutor = nome.substr(0, 25);
        cout << "O tamanho do nome é muito grande, pegando apenas os primeiros 25 caracteres" << endl;
    }
}

void GradeBook::setNomeCurso(string nome){
    if(nome.length() <= 25){
        nomeCurso = nome;
    }
    if(nome.length() > 25){
        nomeCurso = nome.substr(0, 25);
        cout << "O tamanho do nome é muito grande, pegando apenas os primeiros 25 caracteres" << endl;
    }
}
        
void GradeBook::displayMessage(){ // Essa função-membro mostra uma mensagem com o nome do curso
    cout << "O nome do seu curso é: " << getNomeCurso() << endl << " E seu instrutor é: " << getNomeInstrutor() << endl;
}    