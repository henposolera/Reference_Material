#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;
string validaPalabra(string x);
void convert (int stringSize, char word[], string s);
int main(int argc, char const *argv[]) {

	// Ingresa la palabra
  cout << "Ingrese la primera palabra: " << flush;
  string p1;
  p1 = validaPalabra(p1); // valida formato de la palabra

  cout << "Ingrese la segunda palabra: " << flush;
  string p2;
  p2 =validaPalabra(p2); // valida formato de la palabra

  cout << "Ingrese la tercera palabra: " << flush;
  string p3;
  p3 =validaPalabra(p3); // valida formato de la palabra

  string concatPalabra = p1+p2+p3;
  char pMaster [concatPalabra.length()];
  convert (concatPalabra.length(), pMaster, concatPalabra);

  //const char * palabChar = concatPalabra.c_str ();



  cout << "Opciones para cantidad de letras de la nueva palabra: 4,5,6,7" << endl;
  cout << "ingrese el tamano en letras de las palabras que desea: " << flush;
  int cantidad;
  cin >> cantidad;
  while (cantidad < 4 || cantidad > 7){
  	cout << "Error: solo se aceptan los valores 4,5,6 o 7 " << endl;
		cout << "Ingrese el tamano en letras de las palabras que desea: " << flush;
  	cin >> cantidad;
  }
  cout << "Ingrese la cantidad de palabras que desea generar: " << flush;
  int cantNew;
  cin >> cantNew;


  int len = p1.length()+p2.length()+p3.length();
  int i;
  int r;
  int temp;
  cout << "-------------------------" << endl;   //basura
  cout << len << endl;                          //basura
  cout << "-------------------------" << endl;  //basura

   int num[len]; // define tamano del arreglo

   //for (temp=0, i = 1; temp < len; i++, temp++) {
     //num[temp] = i;
   //}


   srand( time(NULL) );  //seed rand()
    //Fisher–Yates shuffle algorithm
    int cuenta = 1;
   while (cuenta <= cantNew) {
   for (int i = len-1; i > 0; i--) {
      r = rand()%i;
      temp = pMaster[i];
      pMaster[i] = pMaster[r];
      pMaster[r] = temp;
    }
    for (int i = 0; i < cantidad; i++) {
      cout << pMaster[i];
    }
    cout << endl;
    cuenta ++;
   }
   cout << "Se han realizado " << cuenta-1 << " nuevas palabras" << endl;


  return 0;
}


string validaPalabra(string x){
  cin >> x;
  while ((x.length() <=1) || (x.length() > 6)) {
    cout << "Error: Solo se permiten palabras de 2 a 6 letras" << endl;
    cout << "Ingrese una nueva palabra: " << flush;
    cin >> x;
  }
  cout << "La palabra " << x << " tiene " << x.length() << " letras." << endl;
  return x;

}

void convert (int stringSize, char word[], string s)  {
  int wSize = stringSize;
  for (int i = 0; i < wSize; i++) {
	  word[i] = s.at(i);
	  cout << word[i];
  }
  cout << endl;
  cout << "La palabra Master: " << "'"<<  s << "'" <<" tiene " << s.length() << " letras." << endl;
}
