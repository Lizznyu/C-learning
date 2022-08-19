//Lizeth Pulido Davila
#include <iostream>
using namespace std;
int main (){
    float cantidadNotas=0, promedioNotas=0, numeroNota=1, notas=0, sumaNotas=0;
    cout<<"¿Cuantas notas desea ingresar al sistema? ";
    cin>>cantidadNotas;
    do
    {
        cout<<"Digite la nota "<<numeroNota<<" : ";
        cin>>notas;
        if (notas>=0.0 && notas<=5.0)
        {
            sumaNotas+=notas;
            promedioNotas=sumaNotas/cantidadNotas;
            numeroNota++;
        }
        else {
        
            cout<<"La nota digitada no es valida porque es mayor a 5 o menor a 0"<<endl;
        }
    } while (numeroNota<=cantidadNotas);
   
     cout<<"\nLa nota final es: "<<promedioNotas<<endl;

    
     
    return 0;
}