#include <iostream>
#include <conio.h>
using namespace std;
void inicializarMatriz(int **&punteroMatriz, int filas, int columnas)
{
    punteroMatriz = new int *[filas];
    for (int posicionFilas = 0; posicionFilas < filas; posicionFilas++)
    {
        punteroMatriz[posicionFilas] = new int[columnas];
    }
}
void pedirDatos(int **&punteroMatriz, int &filas, int &columnas)
{
    cout << "¿Cuantas filas tiene la matriz?: ";
    cin >> filas;
    cout << "¿Cuantas columnas tiene la matriz?: ";
    cin >> columnas;
    inicializarMatriz(punteroMatriz, filas, columnas);
    cout << "Digite los numeros de la matriz" << endl;
    for (int posicionFilas = 0; posicionFilas < filas; posicionFilas++)
    {
        for (int posicionColumnas = 0; posicionColumnas < columnas; posicionColumnas++)
        {
            cout << "Digite el numero en la posicion [" << posicionFilas << "," << posicionColumnas << "]: ";
            cin >> *(*(punteroMatriz + posicionFilas) + posicionColumnas);
        }
    }
}
void trasponerMatriz(int **&punteroMatriz, int filas, int columnas)
{
    int **punteroMatrizAuxiliar;
    inicializarMatriz(punteroMatrizAuxiliar, filas, columnas);
    for (int posicionFilas = 0; posicionFilas < filas; posicionFilas++)
    {
        for (int posicionColumnas = 0; posicionColumnas < columnas; posicionColumnas++)
        {
            *(*(punteroMatrizAuxiliar + posicionColumnas) + posicionFilas) = *(*(punteroMatriz + posicionFilas) + posicionColumnas);
        }
    }
    punteroMatriz = punteroMatrizAuxiliar;
}
void mostrarMatriz(int **punteroMatriz, int filas, int columnas)
{
    for (int posicionFilas = 0; posicionFilas < filas; posicionFilas++)
    {
        for (int posicionColumnas = 0; posicionColumnas < columnas; posicionColumnas++)
        {
            cout << *(*(punteroMatriz + posicionFilas) + posicionColumnas) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int **punteroMatriz, filas, columnas;
    pedirDatos(punteroMatriz, filas, columnas);
    trasponerMatriz(punteroMatriz, filas, columnas);
    mostrarMatriz(punteroMatriz, filas, columnas);
    for (int posicionFilas = 0; posicionFilas < filas; posicionFilas++)
    {
        delete[] punteroMatriz[posicionFilas];
    }
    delete[] punteroMatriz;
    return 0;
}