// Autor: Temasu
// 18/01/2024 21:14
// Este programa usa o objeto GradeBook externo para testes;
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){
    GradeBook myGradeBook1("Matemática", "Fernando");
    GradeBook myGradeBook2("C++", "Juliano");    
    
    myGradeBook1.displayMessage();
    myGradeBook2.displayMessage();
    myGradeBook1.setNomeInstrutor("Julio Marpes");
    myGradeBook2.setNomeInstrutor("Marcos");
    myGradeBook1.displayMessage();
    myGradeBook2.displayMessage();
    myGradeBook1.setNomeInstrutor("Julio Marpes Ferreita Da Silva Toledo Prestes");
    myGradeBook2.setNomeInstrutor("Marcos Marpes Ferreita Da Silva Toledo Prestes");
    myGradeBook1.setNomeCurso("Introdução ao C++, algoritimos e estrutura de dados aplicada");
    myGradeBook2.setNomeCurso("Estrutura de dados teorica, e sistemas atuais");
    myGradeBook1.displayMessage();
    myGradeBook2.displayMessage();    

    return(0);
}