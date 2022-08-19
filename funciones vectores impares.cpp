#include <iostream>
using namespace std;
void pedirDatos (int (&numeros)[], int& tamañoArreglo){
    cout<<"¿Cuantos datos desea regristrar?: ";
    cin>>tamañoArreglo;
    for (int posicionArreglo = 0; posicionArreglo < tamañoArreglo; posicionArreglo++)
    {
        cout<<"Digite un numero: ";
        cin>>numeros[posicionArreglo];
    }
    
}
void identificarImpares (int numeros [], int tamañoArreglo){
    for (int posicionArreglo = 0; posicionArreglo < tamañoArreglo; posicionArreglo++)
    {
        if (numeros[posicionArreglo]%2 !=0)
        {
            cout<<numeros[posicionArreglo]<<" ";
        }
        
    }
    
}
int main (){
    int numeros [100], tamañoArreglo;
    pedirDatos (numeros,tamañoArreglo);
    identificarImpares (numeros, tamañoArreglo);
    return 0;
}