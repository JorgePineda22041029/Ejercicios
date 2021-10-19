#include <iostream>

using namespace std;
int main()
{
    //Declarar variable, p(primero), s(Segundo), t(tercero), c(Cuarto), y m(multiplicación)
    int numero, p, s, t, c, m;
    cout << "ingrese un numero ", cin >> numero;
    p = numero % 10;
    s = p / 10;
    c = s / 10;
    m = p * 100 + t * 10 + c;


    // if statement, para verificar si la respuesta de la multiplicacion sea igual al numero ingresado, asi
    // asi se determina si es palindromo o no!
    if (m = numero){
        cout << "El Numero es Palindromo\n";
    }
    else{
        cout << "El Numero no es Palindromo\n";
    }
}