#include <iostream>
using namespace std;
int main (){
    int numeros1 [100], numeroElementos;
    int numeros2 [100];
    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>numeroElementos;
    for (int ordenVariables = 0; ordenVariables < numeroElementos; ordenVariables++)
    {
        cout<<"Digite el valor del elemento "<<ordenVariables+1<<" : ";
        cin>>numeros1[ordenVariables];
    }
    for (int ordenVariables = 0; ordenVariables < numeroElementos; ordenVariables++)
    {
        numeros2[ordenVariables]=(numeros1[ordenVariables]*2);
    }
    for (int ordenVariables = 0; ordenVariables < numeroElementos; ordenVariables++)
    {
        cout<<numeros1[ordenVariables]<<" * 2 = "<<numeros2[ordenVariables]<<endl;
    } 
return 0;
}