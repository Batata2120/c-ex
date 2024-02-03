// Autor: Temasu
// 31/01/2024 14:49
// Este programa mostra os tripletos de pitagoras menores que 500
#include<iostream>
using std::cout;
using std::endl;

int main(){
    for(long a = 2; a <= 5000; a++){
        for(long b = 2; b <= 5000; b++){
            for(long c = 2; c <= 5000; c++){
                if((a * a * a) + (b * b * b) == (c * c * c)){
                    cout << (a * a * a) << " + "<< b * b * b << " = " << c * c * c << endl;
                }
            }
        }
    }


    return(0);
}