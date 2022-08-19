#include <iostream>
using namespace std;
int main()
{
    int matrizUno[3][3];
    int matrizDos[3][3];
    int sumaMatrices[3][3];
    cout << "Matriz uno: ";
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << "digite los numeros en la posición [" << filas+1 << "] [" << columnas+1 << "]: ";
            cin >> matrizUno[filas][columnas];
        }
    }
    cout << "Matriz dos: ";
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << "digite los numeros en la posición [" << filas+1 << "] [" << columnas+1 << "]: ";
            cin >> matrizDos[filas][columnas];
        }
    }
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            sumaMatrices[filas][columnas] = matrizUno[filas][columnas] + matrizDos[filas][columnas];
        }
    }
    cout << "\nLa suma de matrices resultantes es: "<<endl;
    for (int filas = 0; filas < 3; filas++)
    {
        for (int columnas = 0; columnas < 3; columnas++)
        {
            cout << sumaMatrices[filas][columnas] << " ";
        }
        cout << "\n";
    }

    return 0;
}
