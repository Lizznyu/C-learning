#include <iostream>
using namespace std;

struct persona
{
    char nombre[30];
    bool discapacitado;
};

/**
 * persona:{
 *  nombre: 'pepito perez',
 *  discapacitado: true
 * },
 * persona:{
 *  nombre: 'andres perez',
 *  discapacitado: false
 * },
 */
//¿Que retorna? nombre funcion (que recibe)
bool esDiscapacitado(persona persona)
{
    return persona.discapacitado;
}
//¿Que retorna? nombre funcion (que recibe)
void mostrarPersona(persona persona)
{
    string estadoDiscapacidad = persona.discapacitado ? "Discapacitado" : "No discapacitado" ;
    cout << "\n\nNombre: " << persona.nombre<<endl;
    cout << "Estado: " <<estadoDiscapacidad ;
}

void mostrarPersonas(persona personas[], int totalPersonas)//arreglo de personas
{
    for (int numeroPersona = 0; numeroPersona < totalPersonas; numeroPersona++)
    {
        mostrarPersona(personas[numeroPersona]);
    }
}

int main()
{
    int totalPersonas, contadorPersonasDiscapacitadas = 0, contadorPersonasNoDiscapacitadas = 0;
    char banderaDiscapacitado;
    cout << "¿Cuantas personas desea registrar?: ";
    cin >> totalPersonas;
    struct persona personas[totalPersonas];
    struct persona personasDiscapacitadas[totalPersonas];
    struct persona personasNoDiscapacitadas[totalPersonas];

    for (int numeroPersona = 0; numeroPersona < totalPersonas; numeroPersona++)
    {
        fflush(stdin);
        cout << "Digite el nombre de la persona: ";
        cin.getline(personas[numeroPersona].nombre, 30);
        cout << "¿La persona tiene algun tipo de discapacidad? (s/n): ";
        cin >> banderaDiscapacitado;
        personas[numeroPersona].discapacitado = banderaDiscapacitado == 's' ? true : false;
    }
    for (int numeroPersona = 0; numeroPersona < totalPersonas; numeroPersona++)
    {
        if (esDiscapacitado(personas[numeroPersona]))
        {
            personasDiscapacitadas[contadorPersonasDiscapacitadas] = personas[numeroPersona];
            contadorPersonasDiscapacitadas++;
        }
        else
        {
            personasNoDiscapacitadas[contadorPersonasNoDiscapacitadas] = personas[numeroPersona];
            contadorPersonasNoDiscapacitadas++;
        }
    }
    cout<<"\nEstas son las personas discapacitadas: ";
    mostrarPersonas(personasDiscapacitadas, contadorPersonasDiscapacitadas);
    cout<<"\n\nEstas son las personas no discapacitadas: ";
    mostrarPersonas(personasNoDiscapacitadas, contadorPersonasNoDiscapacitadas);
    return 0;
}