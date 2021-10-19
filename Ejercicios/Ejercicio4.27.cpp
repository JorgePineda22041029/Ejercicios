#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	//numero Binario! Estas son las variables a utlizar!
	int numeroBin = 0;
	int numeroFin = 0, potencia = 0, numeroDec = 0, resultado = 0;

	cout << "Ingrese un numero binario: ";  cin >> numeroBin;

	//Loop while, para verificar que el numero binario ingresado sea mayor a 0
	while (numeroBin > 0) {
		numeroFin = numeroBin % 10;
		numeroBin = numeroBin / 10;
		numeroDec = numeroFin * pow(2, potencia);
		resultado += numeroDec;
		potencia++;

	}

	//se imprime los resultados fuera del loop
	cout << resultado;
	_getch();
	return 0;
}