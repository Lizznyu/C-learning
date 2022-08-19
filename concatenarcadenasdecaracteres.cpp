#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char saludo[] = "Hola que tal ";
    char nombreUsuario[30];
    cout << "Digite su nombre: ";
    cin.getline(nombreUsuario, 30);
    cout << strcat(saludo, nombreUsuario);

    return 0;
}