#include <iostream>
using namespace std;
int main()
{
    int numeros[] = {11,2,3,5,5};
    int suma = 0, equivalente = 0;

    for (int ordenVariables = 0; ordenVariables < 5; ordenVariables++)
    {
        suma += numeros[ordenVariables];
        if (numeros[ordenVariables]>equivalente)
        {
            equivalente=numeros[ordenVariables];
        }           
    }
    if (equivalente==(suma-equivalente))
    {
        cout<<"El numero "<<equivalente<<" equivale a la suma de los demas elementos";
    }
    else {
        cout<<"No existe ningun numero que sea la suma de los demas";
    }
    return 0;
}
