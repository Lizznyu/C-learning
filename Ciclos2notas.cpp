#include<iostream>
using namespace std;
int main(){
    int contadorNotas=1;
    float nota, promedio=0.0, acumuladorNotas=0.0;
    while (contadorNotas<=5)
    {
        cout<<"Digite la nota "<<contadorNotas<<" :";
        cin>>nota;
        acumuladorNotas+=nota;
        contadorNotas++;
    }
    promedio=acumuladorNotas/5;
    cout<<"El promedio de las notas es: "<<promedio<<endl;
    return 0;
}