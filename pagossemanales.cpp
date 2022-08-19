#include<iostream>
using namespace std;
int main (){
    float horasTrabajadas=0, valorTarifa=0, salarioSemanal=0;
    cout<<"Ingrese el numero de horas trabajadas: ";
    cin>>horasTrabajadas;
    cout<<"ingrese el valor de la hora: ";
    cin>>valorTarifa;
    salarioSemanal=horasTrabajadas*valorTarifa;
    cout<<"El salario semanal del empleado es: "<<salarioSemanal;

    return 0;
}