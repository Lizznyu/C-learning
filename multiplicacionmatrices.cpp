#include <iostream>
using namespace std;
int main()
{
    int matrizUno[3][3];
    int matrizDos[3][3];
    int multiplicacionMatrices[3][3], acumulador = 0;
    cout << "Matriz uno: ";
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << "digite los numeros en la posición [" << filas + 1 << "] [" << columnas + 1 << "]: ";
            cin >> matrizUno[filas][columnas];
        }
    }
    cout << "Matriz dos: ";
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << "digite los numeros en la posición [" << filas + 1 << "] [" << columnas + 1 << "]: ";
            cin >> matrizDos[filas][columnas];
        }
    }
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            for (int j = 0; j < 3; j++)
            {
                acumulador += (matrizUno[filas][j] * matrizDos[j][columnas]);
            }
            multiplicacionMatrices[filas][columnas] = acumulador;
            acumulador = 0;
        }
    }
    cout << "\nLa suma de matrices resultantes es: " << endl;
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << multiplicacionMatrices[filas][columnas] << " ";
        }
        cout << "\n";
    }

    return 0;
}
