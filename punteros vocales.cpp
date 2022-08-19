#include<iostream>
#include<string.h>
using namespace std;
void pedirDatos (char *frase){
    cout<<"Digite una frase: ";
    cin.getline(frase,30);
    strupr(frase);
}
void contarVocales (char *frase, int& A, int& E, int& I, int& O, int& U){

    while (*frase)
    {
        switch (*frase)
        {
        case 'A':
            A++;
            break;
        case 'E':
            E++;
            break;
        case 'I':
            I++;
            break;
        case 'O':
            O++;
            break;
        case 'U':
            U++;
            break;
        default:
            break;
        }
        frase++;
    } 
}
void mostrarVocales (int A, int E, int I, int O, int U){
    if(A!=0)
    cout << "La vocal A se uso "<< A << " veces " << endl;
    if(E!=0)
    cout << "La vocal E se uso "<< E << " veces " << endl;
    if(I!=0)
    cout << "La vocal I se uso "<< I << " veces " << endl;
     if(O!=0)
    cout << "La vocal O se uso "<< O << " veces " << endl;
     if(U!=0)
    cout << "La vocal U se uso "<< U << " veces " << endl;
}
int main (){
    char frase [30];
    int A=0,E=0,I=0,O=0,U=0;
    pedirDatos(frase);
    contarVocales(frase,A,E,I,O,U);
    mostrarVocales (A,E,I,O,U);
    return 0;
}