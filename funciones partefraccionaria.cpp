#include<iostream>
using namespace std;
float numero;
void pedirDatos (){
    cout<<"Digite un numero fraccionario: ";
    cin>>numero;
}
void parteFraccionaria (float numero){
    int parteEntera=numero;
	float parteDecimal=numero-parteEntera;
	cout<<"La parte fraccionaria de ese numero es: "<<parteDecimal;
}
int main (){
    pedirDatos ();
    parteFraccionaria(numero);
    return 0;
}