#include <iostream>
#include<conio.h>

using namespace std;

int main() {
	//declarar variables a utilizar!
	int numero = 10;

	//imprimir el encabezado de la tabla
	cout << "Entero" << "\tCuadrado" << "\tCubica" << endl;
	for (int i = 0; i <= numero; i++) {

		int potencia_cuadrado = i * i;
		int potencia_cubica = i * i * i;

		//Imprimir el contenido de la tabla
		cout << i << "\t" << potencia_cuadrado << "\t\t" << potencia_cubica << endl;
	}
	return 0;
}