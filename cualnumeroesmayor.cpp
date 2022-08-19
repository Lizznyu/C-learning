#include <iostream>
using namespace std;
int main (){
    int numero1, numero2, numero3;
    cout<<"Digite tres numeros: ";
    cin>>numero1>>numero2>>numero3;
    if (numero1>numero2 && numero1>numero3)
    {
        cout<<"El numero "<<numero1<<" es mayor";
    }
    else if (numero2>numero1 && numero2>numero3)
    {
        cout<<"El numero "<<numero2<<" es mayor";
    }
    else {cout<<"El numero "<<numero3<<" es mayor";}
     
    return 0;
}