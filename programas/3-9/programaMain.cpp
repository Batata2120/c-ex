// Autor: Temasu
// 17/01/2024 18:08
// Este programa usa o objeto GradeBook externo para testes;
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

int main(){
    GradeBook myGradeBook1("Matemática");
    GradeBook myGradeBook2("C++");    
    
    myGradeBook1.displayMessage();
    myGradeBook2.displayMessage();

    return(0);
}