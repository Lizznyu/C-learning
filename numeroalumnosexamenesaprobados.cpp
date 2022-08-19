#include <iostream>
using namespace std;
void resultadosExamenes(int numeroDeEstudiantes)
{
    float notaExamen1, notaExamen2, notaExamen3;
    int todosLosExamenesFueronAprobados = 0, aprobaronAlmenosUno = 0, aprobaronElUltimo = 0;
    for (int numeroEstudiante = 1; numeroEstudiante <= numeroDeEstudiantes; numeroEstudiante++)
    {
        cout << "\nRegistro de las notas de examen del estudiante " << numeroEstudiante << endl;
        cout << "\nDigite la nota del primer examen: ";
        cin >> notaExamen1;
        cout << "\nDigite la nota del segundo examen: ";
        cin >> notaExamen2;
        cout << "\nDigite la nota del tercer examen: ";
        cin >> notaExamen3;

        if ((notaExamen1 >= 3) && (notaExamen2 >= 3) && (notaExamen3 >= 3))
        {
            todosLosExamenesFueronAprobados++;
        }

        if ((notaExamen1 >= 3) || (notaExamen2 >= 3) || (notaExamen3 >= 3))
        {
            aprobaronAlmenosUno++;
        }

        if ((notaExamen1 < 3) && (notaExamen2 < 3) && (notaExamen3 >= 3))
        {
            aprobaronElUltimo++;
        }
    }
    cout << "\na) Aprobaron todos los examenes: " << todosLosExamenesFueronAprobados;
    cout << "\nb) Aprobaron almenos un examen: " << aprobaronAlmenosUno;
    cout << "\nc) Aprobaron unicamente el ultimo examen: " << aprobaronElUltimo << endl;
}

bool aproboExamen(int nota)
{
    return nota >= 3;
}

bool reproboLosPrimerosExamenes(int examenesReprobados, int totalDeExamenes)
{
    return examenesReprobados == totalDeExamenes - 1;
}
bool aproboAlMenosUnExamen(int examenesAprobados){
    return examenesAprobados>=1;
}
void resultadosExamenesJohan(int numeroDeEstudiantes, int totalDeExamenes)
{
    float notaExamen;
    int todosLosExamenesFueronAprobados = 0, aprobaronAlmenosUno = 0,
        aprobaronSoloElUltimo = 0, examenesAprobados = 0, examenesReprobados = 0;

    for (int numeroEstudiante = 1; numeroEstudiante <= numeroDeEstudiantes; numeroEstudiante++)
    {
        cout << "\nRegistro de las notas de examen del estudiante " << numeroEstudiante << endl;
        for (int numeroExamen = 1; numeroExamen <= totalDeExamenes; numeroExamen++)
        {
            cout << "\nDigite la nota del examen: " << numeroExamen << " : ";
            cin >> notaExamen;
            if (aproboExamen(notaExamen))
            {
                examenesAprobados++;
            }
            else
            {
                examenesReprobados++;
            }
        }
        if (aproboAlMenosUnExamen(examenesAprobados))
        {
            if (examenesAprobados == totalDeExamenes)
            {
                todosLosExamenesFueronAprobados++;
            }
            else if (reproboLosPrimerosExamenes(examenesReprobados, totalDeExamenes) && aproboExamen(notaExamen))
            {
                aprobaronSoloElUltimo++;
            }
            aprobaronAlmenosUno++;
        }
        examenesAprobados = 0;
        examenesReprobados = 0;
    }

    cout << "\na) Aprobaron todos los examenes: " << todosLosExamenesFueronAprobados;
    cout << "\nb) Aprobaron almenos un examen: " << aprobaronAlmenosUno;
    cout << "\nc) Aprobaron unicamente el ultimo examen: " << aprobaronSoloElUltimo << endl;
}

int main()
{
    int totalEstudiantes, numeroNotas;
    cout << "¿Cuantos estudiantes conforman la clase?: ";
    cin >> totalEstudiantes;
    cout << "¿Cuantas notas de examenes desea registrar?: ";
    cin >> numeroNotas;
    resultadosExamenesJohan(totalEstudiantes, numeroNotas);
    return 0;
}