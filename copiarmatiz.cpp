#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void imprimirMatriz(int matriz[100][100], int cantidadFilas, int cantidadColumnas)
{
    for (int filas = 0; filas < cantidadFilas; filas++)
    {
        for (int columnas = 0; columnas < cantidadColumnas; columnas++)
        {
            cout << matriz[filas][columnas] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int matrizOriginal[100][100], cantidadFilas, cantidadColumnas, numeroAleatorio;
    int copiaMatriz[100][100];
    cout << "Digite cuantas filas tiene su matriz: ";
    cin >> cantidadFilas;
    cout << "Digite cuantas columnas tiene su matriz: ";
    cin >> cantidadColumnas;
    for (int Filas = 0; Filas < cantidadFilas; Filas++)
    {
        for (int columnas = 0; columnas < cantidadColumnas; columnas++)
        {
            numeroAleatorio = 1 + rand() % (100);
            matrizOriginal[Filas][columnas] = numeroAleatorio;
        }
    }
    for (int filas = 0; filas < cantidadFilas; filas++)
    {
        for (int columnas = 0; columnas < cantidadColumnas; columnas++)
        {
            copiaMatriz[filas][columnas] = matrizOriginal[filas][columnas];
        }
    }
    cout << "Su matriz fue copiada de la siguiente manera: " << endl;
    imprimirMatriz(copiaMatriz, cantidadFilas, cantidadColumnas);

    return 0;
}