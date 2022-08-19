#include<iostream>
using namespace std;
int solucionJohan (int n)
{
    int suma=0;
    
    for (int i = 1; i <= n; i++)
    {
        suma+=(2*i)-1;
    }
    return suma;
}

int solucionLizeth (int n)
{
    int suma=0, contadorDeSumas=0, i=1;
    while (contadorDeSumas<n)
    {
        if (i%2!=0)
        {
            suma+=i;
            contadorDeSumas+=1;
        }
        i+=1;
    }
    
    return suma;
}

int main (){
    int numero, limite;
    cout<<"Digite el numero de elementos a sumar: ";
    cin>>numero;
    limite= (2*numero)-1;
    cout<<"solucion de Johan: "<<solucionJohan(numero)<<endl;
    cout<<"Solucion de Lizeth: "<<solucionLizeth(limite)<<endl;
}