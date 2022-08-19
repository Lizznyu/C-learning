#include <iostream>
using namespace std;
int main(){
    double distancia, pie=0, pulgada=0, yarda=0, centimetro=0, metro=0;
    cout<<"Digite la distancia en pies: ";
    cin>>distancia;
    pie=distancia;
    yarda=pie/3;
    centimetro=pie*30.48;
    pulgada=pie*12;
    metro=centimetro/100;
    cout<<"La distancia en pies es: "<<pie;
    cout<<"\nLa distancia en yardas es: "<<yarda;
    cout<<"\nLa distancia en pulgadas es: "<<pulgada;
    cout<<"\nLa distancia en centimetro es: "<<centimetro;
    cout<<"\nLa distancia en metros es: "<<metro;

    return 0;
}