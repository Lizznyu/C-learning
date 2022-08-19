#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int numero, opcion;
    cout<<"Bienvenido al Menu"<<endl;
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione una opcion del menu: ";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        cout<<"Digite el numero deseado: ";
        cin>>numero;
        cout<<"El numero "<<numero<<" al cubo es: "<<pow(numero,3);
        break;
    case 2:
        cout<<"Digite el numero deseado: ";
        cin>>numero;
        if (numero%2==0)
        {
            cout<<"El numero es par";
        }
        else {cout<<"El numero es impar";}
    case 3: 
        break;
    }
    return 0;
}