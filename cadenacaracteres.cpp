#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char frase[100];
    int longuitud = 0;
    cout << "Digite una frase: ";
    cin.getline(frase, 100); // nombre variable, longuitud
    longuitud = strlen(frase);
    if (longuitud>10)
    {
        cout << "El numero de elementos de la frase es: " << longuitud;
    }
    return 0;
}