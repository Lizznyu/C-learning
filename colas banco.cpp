#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct Nodo
{
    string nombre;
    int cedula;
    Nodo *siguiente;
};
bool determinarColaVacia (Nodo *&frente){
    return frente == NULL ? true:false;
}
void insertarDatos (Nodo *&frente, Nodo *&fin, Nodo cliente){
    Nodo *nuevoNodo=new Nodo();
    nuevoNodo->nombre=cliente.nombre;
    nuevoNodo->cedula=cliente.cedula;
    nuevoNodo->siguiente=NULL;
    if (determinarColaVacia(frente))
    {
        frente=nuevoNodo;
    }
    else{
        fin->siguiente=nuevoNodo;
    }
    fin=nuevoNodo;
}
void mostrarDatos (Nodo *frente, Nodo *fin){
while  (frente!=NULL)
{
    cout<<frente->nombre<<", "<<frente->cedula<<"."<<endl;
    frente=frente->siguiente;
}

}

int main (){
    Nodo *frente=NULL, *fin=NULL;
    char seguir='s';
    do
    {
        Nodo cliente;
        fflush(stdin);
        cout<<"Digite el nombre: ";
        getline(cin,cliente.nombre);
        cout<<"Digite la cedula: ";
        cin>>cliente.cedula;
        insertarDatos(frente, fin,cliente);
        cout<<"Desea ingresar otro usuario?: ";
        cin>>seguir;

    } while (seguir=='s');
   mostrarDatos (frente, fin); 
    return 0;
}