// Uso de strcpy y strncpy

#include <iostream>

using std::cout;
using std::endl;

#include <cstring>  // prototipo para strcpy and strncpy

int main(int argc, char const *argv[]) {
  char x[] = "Feliz cumpleanos a ti";
  char y[25];
  char z[15];
  strcpy(y,x); //copia el contenido de x dentro de y
  cout << "la cadena dentro del arreglo x es: " << x
  << "\nLa cadena dentro del arreglo y  es: " << y << '\n';

  //copia los primeros 14 caracteres de x dentro de z
  strncpy(z,x,14); // no copia el caracter nulo
  z[14] = '\0'; // agrega '/0' al contenido de z
  cout << "La cadena en el arreglo z es: " << z << endl;

  return 0;
}
