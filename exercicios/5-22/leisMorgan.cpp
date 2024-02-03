// Autor: Temasu
// 31/01/2024 16:24
// Este programa testas algumas expressões baseado nas leis de Morgan
#include<iostream>
using std::cout;
using std::endl;

int main(){
    int x = 1;
    int y = 4;
    int a = 3;
    int b = 2;
    int j = 5;
    int i = 4;
    int g = 2;

    cout << (!(x < 5) && !(y >= 7))  << "  " << (!((x < 5) || (y >=7)))    << endl;
    cout << (!(a == b) || !(g != 5)) << "  " << (!((a == b) && ( g != 5))) << endl;
    cout << (!((x <= 8) && (y > 4))) << "  " << (!(x <= 8) || !(y > 4))   << endl;
    cout << (!((i > 4) || (j <= 6))) << "  " << (!(i > 4) && !(j <= 6))    << endl;

    return(0);
}