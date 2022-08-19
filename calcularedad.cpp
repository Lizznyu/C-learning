#include<iostream>
using namespace std;
int main (){
    float diaNacimiento, mesNacimiento, yearNacimiento, diaActual, mesActual, yearActual, calculoEdad;
    cout<<"Programa para calcular tu edad";
    cout<<"\n\nIngresa el dia de nacimiento: ";
    cin>>diaNacimiento;
    cout<<"\nIngresa el mes de nacimiento: ";
    cin>>mesNacimiento;
    cout<<"\nIngresa el ano de nacimiento: ";
    cin>>yearNacimiento;
    cout<<"\nIngrese el dia actual: ";
    cin>>diaActual;
    cout<<"\nIngrese el mes actual: ";
    cin>>mesActual;
    cout<<"\nIngrese el ano actual: ";
    cin>>yearActual;

    calculoEdad = (yearActual-yearNacimiento)+((mesActual/12)-(mesNacimiento/12))+((diaActual/365)-(diaNacimiento/365));

    if (calculoEdad >1)
    {
        cout<<"\nLa persona tiene "<<calculoEdad<<" anos";
    }
    else 
    {
        cout<<"\nLa persona tiene "<<calculoEdad<<" meses";
    }
    

    return 0;
}