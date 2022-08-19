#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char fraseUno[100];
    char fraseDos[100];
    cout<<"Digite una frase: ";
    cin.getline(fraseUno,100);
    cout<<"Digite una frase: ";
    cin.getline(fraseDos,100);
    strupr(fraseUno);
    strupr(fraseDos);
    if (strcmp(fraseUno,fraseDos)==0)
    {
        cout<<"Las frases "<<fraseUno<<" y "<<fraseDos<<" son iguales";
    }
    else{
         cout<<"Las frases "<<fraseUno<<" y "<<fraseDos<<" no son iguales";
    }
    
    return 0;
}