//Demo operador sizeof
#include<iostream>
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  char c;
  short s;
  int i;
  long l;
  float f;
  double d;
  long double ld;
  int arreglo[20];
  int* ptr = arreglo;

  cout << "sizeof c = " << sizeof c;
  cout << "/tsizeof(char) = " << sizeof(char);
  cout << "sizeof s = " << sizeof s;
  cout << "/tsizeof(short) = " << sizeof(short);
  cout << "sizeof i = " << sizeof i;
  cout << "/tsizeof(int) = " << sizeof(int);
  cout << "sizeof l = " << sizeof l;
  cout << "/tsizeof(long) = " << sizeof(long);
  cout << "sizeof f = " << sizeof f;
  cout << "/tsizeof(float) = " << sizeof(float);
  cout << "sizeof d = " << sizeof d;
  cout << "/tsizeof(double) = " << sizeof(double);
  cout << "sizeof ld = " << sizeof ld;
  cout << "/tsizeof(long double) = " << sizeof(long double);
  cout << "/tsizeof(arreglo) = " << sizeof arreglo;
  cout << "/tsizeof(ptr) = " << sizeof ptr;
  << endl;

  return 0;
}
