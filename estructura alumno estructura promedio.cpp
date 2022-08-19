#include<iostream>
using namespace std;
struct nota
{
    float notaUno;
    float notaDos;
    float notaTres;
};

struct alumno
{
    char nombre [30];
    int edad;
    char sexo [10];
    struct nota notaEstudiante;
};

int main (){
  int numeroEstudiantes, posicionRegistroEstudiante;
  float promedioAlumno=0, mayor=0;
  cout<<"¿Cuantos estudiantes desea registrar?: ";
  cin>>numeroEstudiantes;
  struct alumno alumnos[numeroEstudiantes];
  for (int numeroEstudiante = 0; numeroEstudiante < numeroEstudiantes; numeroEstudiante++)
  {
    fflush(stdin);
    cout<<"\nIngrese el nombre del estudiante: ";
    cin.getline(alumnos[numeroEstudiante].nombre,30);
    cout<<"Ingrese el sexo del estudiante: ";
    cin.getline(alumnos[numeroEstudiante].sexo,30);
    cout<<"ingrese la edad del estudiante (en años): ";
    cin>>alumnos[numeroEstudiante].edad;
    cout<<"Digite la primera nota del estudiante: ";
    cin>>alumnos[numeroEstudiante].notaEstudiante.notaUno;
    cout<<"Digite la segunda nota del estudiante: ";
    cin>>alumnos[numeroEstudiante].notaEstudiante.notaDos;
    cout<<"Digite la tercera nota del estudiante: ";
    cin>>alumnos[numeroEstudiante].notaEstudiante.notaTres;
    promedioAlumno=(alumnos[numeroEstudiante].notaEstudiante.notaUno
    +alumnos[numeroEstudiante].notaEstudiante.notaDos
    +alumnos[numeroEstudiante].notaEstudiante.notaTres)/3;
    if (promedioAlumno>mayor)
    {
        mayor=promedioAlumno;
        posicionRegistroEstudiante=numeroEstudiante;
    }
  }
  cout<<"\nLos datos del estudiante con mejor promedio son: "<<endl<<endl;
  cout<<"Nombre: "<<alumnos[posicionRegistroEstudiante].nombre<<endl;
  cout<<"Sexo: "<<alumnos[posicionRegistroEstudiante].sexo<<endl;
  cout<<"Edad: "<<alumnos[posicionRegistroEstudiante].edad<<endl;
  cout<<"Con el promedio "<<mayor;

  
  return 0;  
}