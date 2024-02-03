// Autor: Temasu
// 28/01/2024 16:43
// Este programa criptografa uma entrada de 4 numeros;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int numero = 0;
  int numeroCriptografado = 0;
  int resto;
  int contador = 1;
  int potenciaDez = 1;
  int quantidade;
  int contador2 = 0;

  cin >> quantidade;
  cout << quantidade << endl;
  while (contador2 < quantidade) {
    contador = 1;
    potenciaDez = 1;
    numeroCriptografado = 0;
    cin >> numero;

    while (contador <= 4) {
      potenciaDez *= 10;

      resto = ((numero % potenciaDez) - (numero % (potenciaDez / 10))) /
              (potenciaDez / 10);
      if (contador < 3) {
        numeroCriptografado += ((resto + 7) % 10) * (potenciaDez * 10);
      } else {
        numeroCriptografado += ((resto + 7) % 10) * (potenciaDez / 1000);
      }
      
      contador++;
    }
    cout << numeroCriptografado << endl;
    contador2++;
  }

  return (0);
}
