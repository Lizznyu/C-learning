#include<iostream>
#include<string.h>
using namespace std;
int main (){
    char frase[100], fraseInvertida[100];
    cout<<"Digite una frase para saber si es palindroma: ";
    cin.getline(frase,100);
    strcpy(fraseInvertida,frase);
    strrev(fraseInvertida);
    if (strcmp(fraseInvertida,frase)==0)
    {
        cout<<"La frase "<<frase<<" es palindroma";
    }
    else{
        cout<<"La frase "<<frase<<" no es palindroma";
    }
    return 0;
}