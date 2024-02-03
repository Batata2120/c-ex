// Autor: Temasu
// 17/01/2024 18:08
// Este programa usa o objeto GradeBook externo para testes;
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"
#include "Analise.h"

int main(){
    GradeBook myGradeBook1("Matemática");
    GradeBook myGradeBook2("C++");    
    Analise analisar1;
    
    myGradeBook1.displayMessage();
    myGradeBook2.displayMessage();

    analisar1.processarResultados();

    return(0);
}