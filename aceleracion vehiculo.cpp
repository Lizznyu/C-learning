#include<iostream>
using namespace std;
int main (){
    double velocidadFinal, velocidadInicial, tiempo, aceleracion;
    cout<<"PROGRAMA PARA HALLAR LA ACELERACION DE UN AUTO"<<endl;
    cout<<"\nDigite la velocidad final del auto: ";
    cin>>velocidadFinal;
    cout<<"\nDigite la velocidad incial del auto: ";
    cin>>velocidadInicial;
    cout<<"\nDigite el tiempo transcurrido: ";
    cin>>tiempo;
    aceleracion=(velocidadFinal-velocidadInicial)/tiempo;
    cout<<"\n La aceleracion del auto es: "<<aceleracion;
    return 0;

}