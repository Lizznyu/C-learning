#include <iostream>
using namespace std;
int arreglo[100], tamañoArreglo;
void pedirDatos()
{
    cout << "Ingrese la cantidad de datos total que seran digitados: ";
    cin >> tamañoArreglo;
    for (int posicionArreglo = 0; posicionArreglo < tamañoArreglo; posicionArreglo++)
    {
        cout << "Digite un numero: ";
        cin >> arreglo[posicionArreglo];
    }
}
bool identificarOrdenCreciente(int numeros[100], int tamañoArreglo)
{
    for (int posicionArreglo = 1; posicionArreglo < tamañoArreglo-1; posicionArreglo++)
    {
        
        if (numeros[posicionArreglo] < numeros[posicionArreglo-1])
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    pedirDatos();
    if (identificarOrdenCreciente(arreglo, tamañoArreglo))
    {
        cout << "El vector esta organizado crecientemente";
    }
    else
    {
        cout << "El vector no esta organizado crencientemente";
    }
    return 0;
}