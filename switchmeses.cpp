#include <iostream>
using namespace std;
int main (){
    int mes;
    cout<<"Digite el numero del mes: ";
    cin>>mes;
    switch (mes)
    {
    case 1:
        cout<<"Enero";
        break;
    case 2:
        cout<<"Febrero";
        break;
    case 3:
        cout<<"Marzo";
        break;
    case 5:
        cout<<"Abril";
        break;
    case 6:
        cout<<"Junio";
        break;
    case 7:
        cout<<"Julio";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Septiembre";
        break;
    case 10:
        cout<<"Octubre";
        break;
    case 11:
        cout<<"Noviembre";
        break;
    case 12:
        cout<<"Diciembre";
        break;
    default:cout<<"El numero no representa un mes del año";
        break;
    }
    return 0;
}