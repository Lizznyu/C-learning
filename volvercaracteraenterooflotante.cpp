#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
    char numeroUnoCaracteres[100], numeroDosCaracteres[100];
    int numeroUno;
    float numeroDos;
    cout<<"Digite algun numero entero: ";
    cin.getline(numeroUnoCaracteres,100);
    cout<<"Digite algun numero real: ";
    cin.getline(numeroDosCaracteres,100);
    numeroUno=atoi(numeroUnoCaracteres);
    numeroDos=atof(numeroDosCaracteres);
    cout<<"La suma de ambos numeros es: "<<numeroUno+numeroDos;

    return 0;
}