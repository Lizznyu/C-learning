#include <iostream>
using namespace std;
struct EtapaCiclismo
{
    int horas;
    int minutos;
    int segundos;
} etapa[3], *punteroEtapa = etapa;
void pedirDatos(EtapaCiclismo *&punteroEtapa)
{
    for (int etapas = 0; etapas < 3; etapas++)
    {
        cout << "¿Cuantas horas tardo en la etapa " << etapas + 1 << "?: ";
        cin >> (punteroEtapa + etapas)->horas;
        cout << "¿Cuantos minutos tardo en la etapa " << etapas + 1 << "?: ";
        cin >> (punteroEtapa + etapas)->minutos;
        cout << "¿Cuantos segundos tardo en la etapa " << etapas + 1 << "?: ";
        cin >> (punteroEtapa + etapas)->segundos;
    }
}
void calcularTiempo(EtapaCiclismo *punteroEtapa, int& horas, int& minutos, int& segundos)
{
    for (int etapas = 0; etapas < 3; etapas++)
    {
        horas += (punteroEtapa + etapas)->horas;
        minutos += (punteroEtapa + etapas)->minutos;
        segundos+= (punteroEtapa + etapas)->segundos;
    }
    if (minutos > 60)
        {
            horas+=minutos/60;
            minutos=minutos%60;
        }
        if (segundos > 60)
        {
            minutos+=segundos/60;
            segundos=segundos%60;
        }
}
void mostrarTiempo(int horas, int minutos, int segundos)
{
    cout << "El ciclista tardo " << horas << " horas con " << minutos << " minutos y " << segundos << " segundos";
}
int main()
{
    int horas=0, minutos=0, segundos=0;
    pedirDatos(punteroEtapa);
    calcularTiempo(punteroEtapa, horas, minutos, segundos);
    mostrarTiempo(horas,minutos, segundos);

    return 0;
}