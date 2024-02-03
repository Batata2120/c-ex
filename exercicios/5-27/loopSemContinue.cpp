// Autor: Temasu
// 31/01/2024 17:51
// Este programa contém um loop sem a instrução continue
#include<iostream>
using std::cout;
using std::endl;

int main(){
    int i = 1;

    for(i = 1; i <= 10; i++){
        if(i != 5){
            cout << i << " ";
        }
    }

    cout << endl;
    cout << "O contador pulou o 5" << endl;

    return(0);
}