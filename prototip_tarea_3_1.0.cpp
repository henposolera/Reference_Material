#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>

using namespace std;
string validaPalabra(string x);
void convert (int stringSize, char word[], string s);
void permutaciones(int cantNew, int stringSize, char word[], int cantidad );

int main(int argc, char const *argv[]) {

	// Ingresa la palabra
  cout << "Paso 1. Ingrese la primera palabra: " << flush;
  string p1;
  p1 = validaPalabra(p1); // valida formato de la palabra
  cout << "---------------------------------------------" << endl;
  cout << "Paso 2. Ingrese la segunda palabra: " << flush;
  string p2;
  p2 =validaPalabra(p2); // valida formato de la palabra
  cout << "---------------------------------------------" << endl;
  cout << "Paso 3. Ingrese la tercera palabra: " << flush;
  string p3;
  p3 =validaPalabra(p3); // valida formato de la palabra
  cout << "---------------------------------------------" << endl;
  string concatPalabra = p1+p2+p3;
  char pMaster [concatPalabra.length()];
  convert (concatPalabra.length(), pMaster, concatPalabra);
  cout << "---------------------------------------------" << endl;
  cout << endl;
  //const char * palabChar = concatPalabra.c_str ();


  int cont = 1;
  while (cont ==1){

  cout << endl;
  cout << "Paso 4. Opciones para cantidad de letras de la nueva palabra: 4,5,6,7" << endl;
  cout << "Elija el tamano en letras, usando las opciones dadas,  de las palabras que desea: " << flush;
  int cantidad;
  cin >> cantidad;
  while (cantidad < 4 || cantidad > 7){
  	cout << "Error: solo se aceptan los valores 4,5,6 o 7 " << endl;
		cout << "Elija el tamano en letras, usando las opciones dadas,  de las palabras que desea: " << flush;
  	cin >> cantidad;
  }
  cout << "---------------------------------------------" << endl;
  cout << endl;
  cout << "Paso 5. Ingrese la cantidad de palabras que desea generar: " << flush;
  int cantNew;
  cin >> cantNew;

  permutaciones(cantNew, concatPalabra.length(), pMaster, cantidad );

  cout << "---------------------------------------------" << endl;
  cout << endl;

  cout << "Desea generar mas palabras de diferente tamano? Digite '1' para Si  o '2' para No " << endl;
  cout << "Continuar? " << flush;
  cin >> cont;
  }
  cout << "Fin del Programa...." << endl;

    //Fisher–Yates shuffle algorithm


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
	  //cout << word[i];
  }
  cout << endl;
  cout << "A continuacion se van a combinar las " << s.length()  <<" letras de las palabras dadas para formar palabras nuevas" << endl;
}

void permutaciones(int cantNew, int stringSize, char word[], int cantidad ) {
	srand( time(NULL) );  //seed rand()
	int r;
	int temp;
	int cuenta = 1;
	while (cuenta <= cantNew) {
		cout << cuenta << ". ";
		for (int i = stringSize-1; i > 0; i--) {
			r = rand()%i;
			temp = word[i];
			word[i] = word[r];
			word[r] = temp;
   }
   for (int i = 0; i < cantidad; i++) {
     cout << word[i];
   }
   cout << endl;
   cuenta ++;
  }
  cout << "Se han creado " << cuenta-1 << " nuevas palabras de " << cantidad << " letras" << endl;
}
