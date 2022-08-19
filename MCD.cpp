#include <iostream>
using namespace std;

int obtenerDividendo(int numero1, int numero2)
{
    return (numero1 > numero2) ? numero1 : numero2;
}
int obtenerDivisor(int numero1, int numero2)
{
    return (numero1 > numero2) ? numero2 : numero1;
}
int obtenerResiduo (int dividendo, int divisor)
{
    return dividendo%divisor;
}
int main()
{
    int numero1, numero2, division, divisor, residuo, dividendo;
    cout << "Ingrese el numero 1: ";
    cin >> numero1;
    cout << "Ingrese el numero 2: ";
    cin >> numero2;

    dividendo = obtenerDividendo(numero1, numero2);
    divisor = obtenerDivisor(numero1, numero2);

    do
    {
        division = dividendo / divisor;
        residuo = obtenerResiduo (dividendo,divisor);
        if (residuo > 0)
        {
            dividendo = divisor;
            divisor = residuo;
        }
    } while (residuo > 0);

    cout << "El Maximo Comun Divisor es: " << divisor;
    return 0;
}