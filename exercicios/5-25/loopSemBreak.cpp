// Autor: Temasu
// 31/01/2024 17:36
// Este programa substitui um break por um if
#include<iostream>
using std::cout;
using std::endl;

int main(){
    int i = 1;

    for(i = 1; i < 5; i++){
        cout << " " << i;
    }
    cout << endl;
    cout << "Contador parou no: " << i << endl;

    return(0);
}