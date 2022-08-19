#include <iostream>+
using namespace std;
void ingresarNumerosMatriz ( int matriz [][100], int& numeroFilas, int& numeroColumnas){
    
    for (int posicionFilas = 0; posicionFilas < numeroFilas; posicionFilas++)
    {
        for (int posicionColumnas = 0; posicionColumnas < numeroColumnas; posicionColumnas++)
        {
            cout<<"Ingrese el numero de la matriz en la posicion ["<<posicionFilas+1<<"]["<<posicionColumnas+1<<"]: ";
            cin>>matriz[posicionFilas][posicionColumnas];
        }
        
    }
    
}
int devolverNumeroMenor (int matriz[][100], int numeroFilas, int numeroColumnas){
    int menor=9999, fila;
    cout<<"¿En que fila desea indagar el numero menor?: ";
    cin>>fila;
    
        for (int posicionColumnas = 0; posicionColumnas < numeroColumnas; posicionColumnas++)
        {
            if (matriz[fila][posicionColumnas]<menor)
            {
                menor=matriz[fila][posicionColumnas];
            }
        }
    return menor;
}
int main (){
    int numeroFilas, numeroColumnas;
    cout<<"¿Cuantas filas tendra la matriz?: ";
    cin>>numeroFilas;
    cout<<"¿Cuantas columnas tendra la matriz?: ";
    cin>>numeroColumnas;
    int matriz[numeroFilas][100];
    ingresarNumerosMatriz (matriz, numeroFilas, numeroColumnas);
    cout<<"El numero menor es: "<<devolverNumeroMenor (matriz, numeroFilas, numeroColumnas);
    return 0;
}