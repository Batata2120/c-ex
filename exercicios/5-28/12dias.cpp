// Autor: Temasu
// 31/01/2024 18:07
// Este programa imprime a canção "12 days of Christmas" usando switch's
#include<iostream>
using std::cout;
using std::endl;

int main(){
    for(int i = 1; i <= 12; i++){
        switch(i){
            case 1:
                cout << "On the first day of Christmas\nMy true love gave to me";
                break;
            case 2:
                cout << "On the second day of Christmas\nMy true love gave to me";
                break;
            case 3:
                cout << "On the third day of Christmas\nMy true love gave to me";
                break;
            case 4:
                cout << "On the fourth day of Christmas\nMy true love gave to me";
                break;
            case 5:
                cout << "On the fifth day of Christmas\nMy true love gave to me";
                break;
            case 6:
                cout << "On the sixth day of Christmas\nMy true love gave to me";
                break;
            case 7:
                cout << "On the seventh day of Christmas\nMy true love gave to me";
                break;
            case 8:
                cout << "On the eighth day of Christmas\nMy true love gave to me";
                break;
            case 9:
                cout << "On the ninth day of Christmas\nMy true love gave to me";
                break;
            case 10:
                cout << "On the tenth day of Christmas\nMy true love gave to me";
                break;
            case 11:
                cout << "On the eleventh day of Christmas\nMy true love gave to me";
                break;
            case 12:
                cout << "On the twelfth day of Christmas\nMy true love gave to me";
                break;
        }
        cout << endl;
        switch(i){
            case 12:
                cout << "Twelve lords-a-leaping" << endl;
            case 11:
                cout << "Eleven ladies dancing" << endl;
            case 10:
                cout << "Ten pipers piping" << endl;
            case 9:
                cout << "Nine drummers drumming" << endl;
            case 8:
                cout << "Eight maids-a-milking!" << endl;
            case 7:
                cout << "Seven swans-a-swimming!" << endl;
            case 6:
                cout << "Six geese-a-laying" << endl;
            case 5:
                cout << "Five golden rings" << endl;
            case 4:
                cout << "Four calling birds" << endl;
            case 3:
                cout << "Three French hens" << endl;
            case 2:
                cout << "Two turtle doves" << endl;
            case 1:
                cout << "A partridge in a pear tree" << endl;
                break;
        }
        cout << endl;
    }

    return(0);
}