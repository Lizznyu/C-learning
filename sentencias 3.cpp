#include <iostream>
using namespace std;
int main (){
    int dia;
    string nombreDia;//Direcciona a una de las setencias
    cout<<"Digite un dia de la semana para determinar su nombre: ";
    cin>>dia;

    switch (dia)
    {
    case 1:
        nombreDia="Domingo";
        break;//Indica que ya cumplio con su objetivo y no hay que evaluar los siguientes
    case 2:
        nombreDia="Lunes";
        break;
    case 3:
        nombreDia="Martes";
        break;
    case 4:
        nombreDia="Miercoles";
        break;
    case 5:
        nombreDia="Jueves";
        break;
    case 6:
        nombreDia="Viernes";
        break;
    case 7:
        nombreDia="Sabado";
        break;
    default:
        nombreDia="";
        break;
    }
    if (nombreDia !="")//si NO esta vacio entonces
    {
        cout<<"El dia es: "<<nombreDia<<endl;
    } else{cout<<"El numero digitado no corresponde a los dias de la semana";}//de resto responde esto
    
    return 0;
}