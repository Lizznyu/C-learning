#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char fraseUno[100],fraseDos[100];
    cout<<"Digite una frase: ";
    cin.getline(fraseUno,100);
    cout<<"Digite otra frase: ";
    cin.getline(fraseDos,100);

    if (strcmp(fraseUno,fraseDos)==0)
    {
        cout<<"Ambas frases son iguales";
    }
    else if (strcmp(fraseUno,fraseDos)>0)
    {
        cout<<fraseUno<<" esta despues alfabeticamente que la frase "<<fraseDos;
    }
    else{
        cout<<fraseDos<<" esta despues alfabeticamente que la frase "<<fraseUno;
    }
    
    
    return 0;
}