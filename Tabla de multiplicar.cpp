#include <iostream>
#include <conio.h>//es necesario incluir esta libreria de funciones
using namespace std;
int main(){
    int multiplicacion, multiplicando, multiplicador=1;
    cout<<"Programa para obtener la tabla de multuplicar"<<endl;
    cout<<"Ingrese un numero del 1 al 9: "<<endl;
    cin>>multiplicando;
    cout<<"La tabla del numero "<<multiplicando<<" es: "<<endl;
    do{//hace parte de las funciones
        multiplicacion=multiplicando*multiplicador;
        cout<<multiplicando<<"*"<<multiplicador<<"="<<multiplicacion<<endl;
        multiplicador++;//operador de incremento en uno
    }
    while (multiplicador<=10);
   
    return 0;

}