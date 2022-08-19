#include <iostream>
using namespace std;
int main(){
    int cantidadNumero=0, numero=0, suma=0;
cout<<"Ingresa un numero: ";
cin>>cantidadNumero;

if (cantidadNumero>0)
{
    for ( numero = 0; numero <=cantidadNumero; numero++)
    {
        suma+=numero;
    }
}
else {cout<<"El numero digitado no es postivo "<<endl; }

cout<<"El resultado de la suma de los "<<cantidadNumero<<" primeros numeros naturales es: "<<suma;
    return 0;
}