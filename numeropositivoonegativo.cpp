#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "Ingrese un numero para validar si es positivo, negativo o igual a cero: ";
    cin >> numero;
    string mensaje = (numero > 0) ? " es positivo" : (numero < 0) ? " es negativo" : "Es igual a 0";
    cout << mensaje;

    return 0;
}