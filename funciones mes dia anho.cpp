#include <iostream>
using namespace std;
void calcularAños (int cantidadDeDias, int& año, int& mes, int& dia){
    año += (cantidadDeDias / 365);
    cantidadDeDias%=365;
    mes += (cantidadDeDias /30);
    cantidadDeDias%=30;
    dia+=(cantidadDeDias%30);
    if (dia>30)
    {
        mes++;
        dia-=30;
    }
}

int main(){
    int cantidadDeDias, añoInicial=2000, mesInicial=1, diaInicial=1;
    cout<<"¿Cuantos dias desea añadir a la fecha (1/1/2000)?: ";
    cin>>cantidadDeDias;
    calcularAños (cantidadDeDias, añoInicial, mesInicial, diaInicial);
    cout<<"la fecha resultante es "<<diaInicial<<"/"<<mesInicial<<"/"<<añoInicial;
    return 0;
}