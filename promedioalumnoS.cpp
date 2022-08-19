#include <iostream>
using namespace std;
int main (){
    float notaPractica, notaTeorica, notaParticipacion,notaFinal;
    cout<<"Digite la nota de practica: ";
    cin>>notaPractica;
    cout<<"Digite la nota de teoria: ";
    cin>>notaTeorica;
    cout<<"Digite la nota de participacion: ";
    cin>>notaParticipacion;
    notaPractica *=0.3; //resume notapartici=notaparticipacion*0.3
    notaTeorica*=0.6;
    notaParticipacion*=0.1;
    notaFinal=notaPractica+notaTeorica+notaParticipacion;
        if (notaFinal>0.0 && notaFinal<5.0)
        {
            cout<<"La nota final es: "<<notaFinal;
        }
        else{cout<<"Alguna de las notas digitadas no es valida";}
    return 0;
}