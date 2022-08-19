#include <iostream>
using namespace std;

template <class TipoDeDatos>
TipoDeDatos maximo(TipoDeDatos primerDato, TipoDeDatos segundoDato, TipoDeDatos tercerDato)
{ 
    if (primerDato > segundoDato && primerDato > tercerDato)
    {
        return primerDato;
    }
    else if (segundoDato > tercerDato)
    {
        return segundoDato;
    }
    else
    {
        return tercerDato;
    }
}
int main()
{
    cout << "El mayor dato es: " << maximo(9,4,8);
    return 0;
}