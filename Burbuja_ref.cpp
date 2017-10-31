//ordenamiento burbuja con referencias
#include <iostream>
using std::cout;
using std::endl;

#include<iomanip>
using std:setw;

void ordenamientoBurbuja(int* , const int) ;
void intercambio(int* const, int* const );

int main(int argc, char const *argv[]) {
  const int tamanoArreglo=10;
  int a[tamanoArreglo] = {2,6,4,8,10,12,89,68,45,37};
  cout << "Elementos de datos en su orden original\n";
  for (size_t i = 0; i < tamanoArreglo; i++)
    cout << setw(4) << a[i];
    ordenamientoBurbuja(a,tamanoArreglo); // ordena el arreglo
    cout << "\nElementos de datos en orden ascendente\n";
    for (size_t j = 0; j < tamanoArreglo; j++)
      cout << setw(4) << a[j] ;
      cout << endl;

  return 0;
}

// ordena un arreglo de enteros mediante el algoritmo de ordenamiento burbuja
void ordenamientoBurbuja(int* arreglo, const int tamano) {
  //ciclo para controlas las pasadas
  for (size_t pasada = 0; pasada < tamano-1; pasada++)
    //ciclo para controlar las comparaciones durante cada pasada
    for (size_t k = 0; k < tamano-1; k++)
      //intercambia elementos adyacentes, si estos se encuentran en desorden
      if (arreglo[k])>arreglo[k+1] {
        intercambio(&arreglo[k], &arreglo[k+1]);
      }
}

// intercambia valores en localidades de memoria a los que apuntan ptrElement1 y ptrElement2
void intercambio(int* const ptrElement1, int* const ptrElement2) {
  int mantiene = *ptrElement1;
  *ptrElement1 =*ptrElement2;
  *ptrElement2 = mantiene;
}
