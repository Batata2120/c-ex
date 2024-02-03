// Autor: Temasu
// 17/01/2024 19:17
// Este programa contém a classe GradeBook
#include<iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

GradeBook::GradeBook(string nome){ // Construtor da classe
    setNomeCurso(nome);
}
        
string GradeBook::getNomeCurso(){
    return(nomeCurso);
}
        
void GradeBook::setNomeCurso(string nome){
    if(nome.length() <= 25){
        nomeCurso = nome;
    }
    if(nome.length() > 25){
        nomeCurso = nome.substr(0, 25);
        cout << "O tamanho do nome é muito grande, pegando apenas os primeiros 15 caracteres" << endl;
    }
}
        
void GradeBook::displayMessage(){ // Essa função-membro mostra uma mensagem com o nome do curso
    cout << "O nome do seu curso é: " << getNomeCurso() << endl;
}    