#include <iostream>
using namespace std;
void esPrimo(int numero)
{
    int *direccionNumero;
    bool primo = true;
    direccionNumero = &numero;
    if (*direccionNumero != 0 || *direccionNumero != 1 || *direccionNumero != 4)
    {
        for (int x = 2; x < *direccionNumero / 2; x++)
        {
            if (*direccionNumero % x == 0)
            {
                primo = false;
            }
        }
    }
    else
    {
        primo = false;
    }
    if (primo)
    {
        cout << "El numero " << *direccionNumero << " es primo y esta guardado en la posicion de memoria " << direccionNumero;
    }
    else{
        cout<<"El numero "<<*direccionNumero<<" no es primo y esta guardado en la posicion de memoria "<<direccionNumero;
    }
}
int main()
{
    int numero;
    cout << "Digite un numero: ";
    cin >> numero;
    esPrimo(numero);
    return 0;
}