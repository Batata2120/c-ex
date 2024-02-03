// Autor: Temasu
// 17/01/2024 17:57
// Esta classe serve para guardar um nome de um curso, e mostrar ao usuario;
#include<string>
using std::string;

class GradeBook{
    public:
        
        GradeBook(string nome);
        string getNomeCurso();
        void setNomeCurso(string nome);
        void displayMessage();
    
    private:
        string nomeCurso;
};
