#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos(int& numeroDatos, int *&datos)
{
    cout << "¿Cuantos datos desea ingresar?: ";
    cin >> numeroDatos;
    datos = new int[numeroDatos];
    for (int posicionDato = 0; posicionDato < numeroDatos; posicionDato++)
    {
        cout << "Ingrese el dato: ";
        cin >> *(datos + posicionDato); // datos[posicionDato];
    }
}
bool buscarNumero(int numeroDatos, int *datos, int dato)
{
    for (int posicionDato = 0; posicionDato < numeroDatos; posicionDato++)
    {
        if (*(datos + posicionDato) == dato)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int datosTotales, *datos, dato;
    pedirDatos(datosTotales, datos);
    cout << "¿Qué numero desea buscar en los datos?: ";
    cin >> dato;
    if (buscarNumero(datosTotales, datos, dato))
    {
        cout << "El numero se encuentra dentro de los datos";
    }
    else
    {
        cout << "El numero no se encuentra dentro de los datos";
    }
    delete[] datos;
    return 0;
}