#include <iostream>
using namespace std;

bool esImpar(int contador)
{
    return contador % 2 != 0;
}
int diferenciaSumatoriaImparesyPares(int n)
{
    int numerosImpares = 0, numerosPares = 0, resultado = 0;
    for (int contador = 1; contador <= n; contador++)
    {
        if (esImpar(contador))
        {
            numerosImpares += contador;
        }
        else
        {
            numerosPares += contador;
        }
    }
    resultado = numerosImpares - numerosPares;
    return resultado;
}
int main()
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << diferenciaSumatoriaImparesyPares(numero);
    return 0;
}