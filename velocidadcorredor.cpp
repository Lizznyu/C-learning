#include<iostream>
using namespace std;
int main (){
    float registro=1, velocidad=0, sumaVelocidad=0, promedioVelocidad=0;
   do
   {
        cout<<"Ingrese el registro "<<registro<<" de velocidad del corredor (minutos.segundos): ";
        cin>>velocidad;
        sumaVelocidad+=velocidad;
        
        registro++;
   }  while (velocidad!=0.0);
    if (velocidad==0.0)
        {
            promedioVelocidad=sumaVelocidad/(registro-1);
            cout<<"La velocidad promedio es: "<<promedioVelocidad;
        }  
    return 0;
}