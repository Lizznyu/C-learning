#include <iostream>
using namespace std;
struct Fecha
{
    int dia, mes, año;
};
void pedirDatos(Fecha& fechaUno, Fecha& fechaDos)
{
    cout << "PRIMER FECHA" << endl;
    cout << "Dia: ";
    cin >> fechaUno.dia;
    cout << "Mes: ";
    cin >> fechaUno.mes;
    cout << "Año: ";
    cin >> fechaUno.año;

    cout << "\nSEGUNDA FECHA: " << endl;
    cout << "Dia: ";
    cin >> fechaDos.dia;
    cout << "Mes: ";
    cin >> fechaDos.mes;
    cout << "Año: ";
    cin >> fechaDos.año;
}
Fecha determinarFechaReciente(Fecha fechaUno, Fecha fechaDos)
{
    if (fechaUno.año < fechaDos.año)
    {
        return fechaDos;
    }
    else if (fechaUno.año == fechaDos.año && fechaUno.mes < fechaDos.mes)
    {
        return fechaDos;
    }
    else if (fechaUno.año == fechaDos.año && fechaUno.mes == fechaDos.mes && fechaUno.dia < fechaDos.dia)
    {
        return fechaDos;
    }
    else if (fechaUno.año == fechaDos.año && fechaUno.mes == fechaDos.mes && fechaUno.dia == fechaDos.dia)
    {
        cout<<"Ambas fechas son iguales";
        return Fecha();
    }
    
    return fechaUno;
}
int main()
{
    Fecha fechaUno, fechaDos, fechaReciente;
    pedirDatos(fechaUno, fechaDos);
    fechaReciente=determinarFechaReciente(fechaUno, fechaDos);
    if (fechaReciente.año!=0)
    {
        cout << "La fecha mas reciente es: "<<fechaReciente.dia<<"/"<<fechaReciente.mes<<"/"<<fechaReciente.año;
    }
     
    
    return 0;
}