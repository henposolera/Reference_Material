// uso de strcat y strncat
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>

int main(int argc, char const *argv[]) {
  char s1[20];
  char s2[] = "anio nuevo";
  char s3[40] = "";

 cout << "s1 = " << s1 << "\ns2 = " << s2;
 strcat(s1, s2); // contatena s2 a s1
 cout << "\n\nDespues de strcat(s1,s2): \ns1" << s1
 << "\ns2 = " << s2;

 //concatena los primeros 6 caracteres de s1 a s3
 strncat(s3, s1, 6) // coloca '/0' despues del ultimo caracter

 cout << "\n\nDespues de strncat(s3,s1,6):\ns1 = " << s1
 << "\ns3 = " << s3;

 strcat(s3, s1); // concatena s1 a s3
 cout << "\n\nDespues de strcat(s3,s1):\ns1 = " << s1
 << "\ns3 = " << s3 << endl;
  return 0;
}
