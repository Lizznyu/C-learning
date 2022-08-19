#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int opcionesTablas=1, tablaMultiplicacion, numeroTabla,producto=0;
    cout<<"Programa para obtener la tabla de multiplicar"<<endl;
    while (opcionesTablas <=10)
    {
        cout<<"Tabla del "<<opcionesTablas<<endl;
        opcionesTablas++;
    }
    cout<<"Seleccione la tabla de multiplicacion deseada: ";
    cin>>numeroTabla;
    cout<<"La tabla del numero "<<numeroTabla<<" es: "<<endl;
    for (tablaMultiplicacion = 1; tablaMultiplicacion <= 10; tablaMultiplicacion++)
    {
        producto=numeroTabla*tablaMultiplicacion;
        cout<<numeroTabla<<" * "<<tablaMultiplicacion<<" = "<<producto<<endl;
    }
    
    return 0;
}