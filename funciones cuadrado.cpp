#include<iostream>
using namespace std;
float numeroUno;
void pedirDatos (){
    cout<<"Digite un numero: ";
    cin>>numeroUno;
}
void elevarCuadrado (float numeroUno){
    cout<<"El cuadrado del numero "<<numeroUno<<" es "<<numeroUno*numeroUno;
}
int main (){
    pedirDatos ();
    elevarCuadrado (numeroUno);
    return 0;
}