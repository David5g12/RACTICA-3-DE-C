#include<iostream>
#include<math.h>

using namespace std;
int main() {
	int numeros[6] = { 10,20,30,40,50,60 };
	int n[] = { 3,4,5 };//declarar un arreglo de 3 elementos 
	char c[] = { 'L','u','i','s' };//declara un arreglo de 4 elementos
	char s[] = "Mona Lisa";

	cout << "El arreglo de tipo entero de 6 elementos es:"<<"--->" << numeros[0] << "," << numeros[1] << "," << numeros[2] << "," << numeros[3]
		<< "," << numeros[4] << "," << numeros[5] << endl;
	cout << "El arreglo de tipo entero de 3 elementos es:"<<"--->"<< n[0] << "," << n[1] << "," << n[2] << endl;
	cout << "El arreglo de tipo char de 4 elementos es:"<<"----->" << c[0] << "," << c[1] << "," << c[2] << "," << c[3] << endl;
	cout << "El arreglo de tipo char Mona Lisa es :"<<"--------->" << s[0] << s[1] << s[2] << s[3]<<" " << s[5] << s[6] << s[7] << s[8] << endl;

	return 0;
}