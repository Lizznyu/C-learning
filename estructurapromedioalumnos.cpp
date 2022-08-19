#include <iostream>
using namespace std;
struct alumno
{
    char nombre[30];
    int edad;
    float promedio;
} alumnos[3];

int main()
{
    float mayor = 0;
    for (int ordenEstudiante = 0; ordenEstudiante < 3; ordenEstudiante++)
    {
        fflush(stdin);
        cout << "Digite el nombre del estudiante: ";
        cin.getline(alumnos[ordenEstudiante].nombre, 30);
        cout << "Digite la edad del estudiante: ";
        cin >> alumnos[ordenEstudiante].edad;
        cout << "Digite el promedio del estudiante: ";
        cin >> alumnos[ordenEstudiante].promedio;
        if (alumnos[ordenEstudiante].promedio > mayor)
        {
            mayor = alumnos[ordenEstudiante].promedio;
        }
        cout << "\n";
    }
    cout << "El mayor promedio es: " << mayor << endl;
    for (int ordenEstudiante = 0; ordenEstudiante < 3; ordenEstudiante++)
    {
        if (alumnos[ordenEstudiante].promedio == mayor)
        {
            cout << "\nEl estudiante com mayor promedio es " << alumnos[ordenEstudiante].nombre << endl;
            cout << "\nSu edad es: " << alumnos[ordenEstudiante].edad << endl;
            cout << "\nSu promedio es: " << alumnos[ordenEstudiante].promedio;
        }
    }
    return 0;
}
