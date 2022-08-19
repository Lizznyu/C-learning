#include <iostream>
using namespace std;
struct Lista
{
    int numero;
    Lista *parteSiguiente;
};
void insertarNumeroalFinaldelaLista(Lista *&lista, int numero) // recibe la ultima parte de la lista
{                                    
    Lista *nuevaParte = new Lista(); // crea espacio para insertar numero
    nuevaParte->numero = numero;     // inserta el numero en ese espacio creado
    Lista *posicionSiguiente = lista;   // recorre la lista
    Lista *posicionActual = lista;  // apunta a la cabeza de la lista
    while (posicionSiguiente != NULL)
    {
        posicionActual = posicionSiguiente;
        posicionSiguiente = posicionSiguiente->parteSiguiente; // se asegura que dicho espacio sea creado al final de la lista
    }
    if (lista == posicionSiguiente)
    {
        lista = nuevaParte;//al inicio cuando ambos son nulos despues de verificar que no se puede mover
    }
    else
    {
        posicionActual->parteSiguiente = nuevaParte;
    }
    nuevaParte->parteSiguiente = posicionSiguiente;
}
void mostrarLista(Lista *&lista)
{
    Lista *apuntadorLista = lista;
    while (apuntadorLista != NULL)
    {
        cout << apuntadorLista->numero << endl;
        apuntadorLista = apuntadorLista->parteSiguiente; // se asegura que dicho espacio sea creado al final de la lista
    }
}
void mostrarImpares(Lista *&lista)
{
    Lista *apuntadorLista = lista;
    while (apuntadorLista != NULL)
    {
        if (apuntadorLista->numero%2!=0)
        {
            cout << apuntadorLista->numero << endl;
        }
        apuntadorLista = apuntadorLista->parteSiguiente; // se asegura que dicho espacio sea creado al final de la lista
    }
}

int main()
{
    struct Lista *lista = NULL;
    char bandera = 's';
    int numero;
    while (bandera == 's')
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        cout << "¿Desea seguir insertando numeros (s/n)?: ";
        cin >> bandera;
        insertarNumeroalFinaldelaLista(lista, numero);
    }
    mostrarImpares(lista);

    return 0;
}