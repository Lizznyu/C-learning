#include<iostream>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarAPila (Nodo *&pila, int numero){
    Nodo *nuevoNodo =new Nodo ();
    nuevoNodo->dato=numero;
    nuevoNodo->siguiente=pila;
    pila=nuevoNodo;
    cout<<"\tEl elemento "<<numero<<" ha sido insertado en la pila correctamente";
}
void mostrarPila (Nodo *&pila, int &numero){
    Nodo *auxiliar=pila;
    numero=auxiliar->dato;
    pila=auxiliar->siguiente;
    delete auxiliar;
}
int main (){
    Nodo *pila=NULL;
    int opcionMenu, numero;
    cout<<"\t CREANDO PILA"<<endl;
    cout<<"Digite 1 para insertar un caracter a la pila."<<endl;
    cout<<"Digite 2 para mostrar todos los elementos de la pila."<<endl;
    cout<<"Digite 3 para salir."<<endl;
    cin>>opcionMenu;

    switch (opcionMenu)
    {
    case 1:
        cout<<"Digite el numero que desea agregar a la pila: ";
        cin>>numero;
        agregarAPila(pila,numero);
        break;
    case 2:
        mostrarPila(pila, numero);
        if (pila !=NULL)
        {
            cout<<numero<<" , ";
        }
        else { cout<<numero<<".";}
        
        break;
    case 3:
        break;
    default:
        break;
    }

    return 0;
}