//============================================================================
// Name        : 1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

//

using namespace std;
//void validaPalabra(char x[]);
int main() {

srand(time(NULL));

// permutaciones

int x[10];
int random;
random = rand() % 18 + 1; // cambia a variable que suma total de palabras
x[0] = rand() % 17 + 1;
x[1] = rand() % 17 + 1;
x[2] = rand() % 17 + 1;
x[3] = rand() % 17 + 1;
x[4] = rand() % 17 + 1;
x[5] = rand() % 17 + 1;
x[6] = rand() % 17 + 1;
x[7] = rand() % 17 + 1;
x[8] = rand() % 17 + 1;
x[9] = rand() % 17 + 1;
string palabra("lasgrancucarachas");
while (x[0]==x[1]){
	x[1]=rand() % 10 + 1;
}
while (x[2]==x[0] || x[2]==x[1]){
	x[2]=rand() % 10 + 1;
}
while (x[3]==x[2] || x[3]==x[1] || x[3]==x[0]) {
	x[3]=rand() % 10 + 1;
}
while (x[4]==x[3] || x[4]==x[2] || x[4]==x[1] || x[4]==x[0]) {
	x[4]=rand() % 10 + 1;
}
while (x[5]==x[4] || x[5]==x[3] || x[5]==x[2] || x[5]==x[1] || x[5]==x[0]) {
	x[5]=rand() % 10 + 1;
}
while (x[6]==x[5] || x[6]==x[4] || x[6]==x[3] || x[6]==x[2] || x[6]==x[1] || x[6]==x[0]) {
	x[6]=rand() % 10 + 1;
}
while (x[7]==x[6] || x[7]==x[5] || x[7]==x[4] || x[7]==x[3] || x[7]==x[2] || x[7]==x[1] ||  x[7]==x[0]) {
	x[7]=rand() % 10 + 1;
}
while (x[8]==x[7] || x[8]==x[6] || x[8]==x[5] || x[8]==x[4] || x[8]==x[3] || x[8]==x[2] ||  x[8]==x[1] ||  x[8]==x[0]) {
	x[8]=rand() % 10 + 1;
}
while (x[9]==x[8] || x[9]==x[7] || x[9]==x[6] || x[9]==x[5] || x[9]==x[4] || x[9]==x[3] ||  x[9]==x[2] || x[9]==x[1] || x[9]==x[0]) {
	x[9]=rand() % 10 + 1;
}
cout << x[0] << endl;
cout << x[1] << endl;
cout << x[2] << endl;
cout << x[3] << endl;
cout << x[4] << endl;
cout << x[5] << endl;
cout << x[6] << endl;
cout << x[7] << endl;
cout << x[8] << endl;
cout << x[9] << endl;
string newPalabra;

//newPalabra = palabra.at(x[0])+palabra.at(x[1])+palabra.at(x[2])+palabra.at(x[3])+palabra.at(x[4])+palabra.at(x[5]);
//cout << rand() % 10 + 1 << endl;
//cout << rand() % 10 + 1 << endl;

//newPalabra.at(0) = palabra.at(x[0]);
//newPalabra.at(1) = palabra.at(x[1]);
//newPalabra.at(2) = palabra.at(x[2]);
//newPalabra.at(3) = palabra.at(x[3]);
//newPalabra.at(4) = palabra.at(x[4]);
//newPalabra.at(5) = palabra.at(x[5]);
cout << "Original word = " << palabra << endl;
cout << "New Word = "<< palabra.at(x[0]) <<  palabra.at(x[1]) << palabra.at(x[2]) << palabra.at(x[3]) <<  palabra.at(x[4]) << palabra.at(x[5]) << endl;
//cout << "New Word =" << newPalabra << endl;
return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
