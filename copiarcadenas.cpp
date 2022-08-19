#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char frase[100];
    char copiaFrase[100];
    cout << "Digite una frase: ";
    cin.getline(frase, 100);
    strcpy(copiaFrase, frase);
    cout << "La frase copiada es: " << copiaFrase;
    return 0;
}
