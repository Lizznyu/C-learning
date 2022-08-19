#include <iostream>
using namespace std;
int main()
{
    int numerosTotales, menor = 9999;
    cout << "¿cuantos numeros desea a digitar?: ";
    cin >> numerosTotales;
    int numeros[numerosTotales], *direccionNumero;
    for (int posicionNumero = 0; posicionNumero < numerosTotales; posicionNumero++)
    {
        cout << "Digite un numero:  ";
        cin >> numeros[posicionNumero];
    }
    direccionNumero = numeros;
    for (int posicionNumero = 0; posicionNumero < numerosTotales; posicionNumero++)
    {
        if (*direccionNumero < menor)
        {
            menor = *direccionNumero;
        }
        direccionNumero++;
    }
    cout << "El numero menor es: " << menor;

    return 0;
}