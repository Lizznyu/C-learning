#include <iostream>
using namespace std;
int main(){
    float nota1,nota2,nota3,nota4,promedio;
    ;

    cout<<"Digite la primera nota del estudiante: ";
    cin>>nota1;
    cout<<"\nDigite la segunda nota del estudiante: ";
    cin>>nota2;
    cout<<"\nDigite la tercera nota del estudiante: ";
    cin>>nota3;
    cout<<"\nDigite la cuarta nota del estudiante: ";
    cin>>nota4;
    promedio=(nota1+nota2+nota3+nota4)/4;
    cout<<"\nEl promedio de las notas del estudiante es: "<<promedio<<" entonces ";
    if (promedio>=3.5 and promedio<5.0)
    {
        cout<<"El estudiante aprobo la materia de tecnologia";
    }
    else if (promedio>3.0 and promedio<3.5)
    {
        cout<<"No tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar";
    }
    else 
    {
        cout<<"El estudiante reprobo la materia de tecnologia";
    }

    return 0;//Lizeth Dayana Pulido Davila
}

