#include <iostream>
using namespace std;
int main(){
    float numero1, numero2, numero3, producto, suma;
    cout<<"Ingrese tres numeros: ";
    cin>>numero1>>numero2>>numero3;
    if (numero1>0)
    {
        producto=numero1*numero2*numero3;
        cout<<"El resultado de la multiplicacion es: "<<producto;
    }
    else {
        suma=numero1+numero2+numero3;
        cout<<"El resultado de la suma es: "<<suma;
     }

    return 0;
}