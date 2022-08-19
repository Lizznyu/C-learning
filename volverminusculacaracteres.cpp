#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char nombreUsuario[100];
    cout<<"Digite su nombre en MAYUSCULAS: ";
    cin.getline(nombreUsuario,100);
    if (nombreUsuario[0]=='A')
    {
        strlwr(nombreUsuario);
        cout<<"El nombre digitado en minusculas es: "<<nombreUsuario;
    }
    
    return 0;
}