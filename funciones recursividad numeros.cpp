#include <iostream>
using namespace std;
void escribeNumeros(int numeroInicial, int numeroFinal)
{
    int numeroActual;
    numeroActual=numeroInicial;
    if (numeroActual <= numeroFinal)
    {
        cout<<numeroActual<<" ";
        escribeNumeros(numeroInicial+1,numeroFinal);
    }
}
int main()
{
    int numeroInicial, numeroFinal;
    cout<<"Digite el numero inicial: ";
    cin>>numeroInicial;
    cout<<"Digite el numero Final: ";
    cin>>numeroFinal;
    escribeNumeros (numeroInicial, numeroFinal);
    return 0;
}