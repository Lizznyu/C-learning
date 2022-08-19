#include <iostream>
using namespace std;
int main(){
    int numero1, numero2, numero3, numero4;
    cout<<"Digite tres numeros: ";
    cin>>numero1>>numero2>>numero3;
    cout<<"Digite el numero a comparar: ";
    cin>>numero4;
    if (numero4==numero1)
    {
        cout<<"El numero "<<numero4<<" coincice con el numero "<<numero1;
    }
    else if (numero4==numero2 )
    {
        cout<<"El numero "<<numero4<<" coincice con el numero "<<numero2;
    }
    else if (numero4==numero3)
    {
        cout<<"El numero "<<numero4<<" coincice con el numero "<<numero3;
    }
    else {cout<<"El numero "<<numero4<<"no coincide con los otros numeros digitados";}
    return 0;
}