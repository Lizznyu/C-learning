//funciones math.h
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	cout<<"Demostracion de funcionames matematicas en C++"<<endl;
	cout<<"Entre 32.5 y 21 el numero mayor: "<<endl;
	cout<<fmax(32.5,21)<<endl;
	cout<<"Entre 32.5 y 21 el numero menor es: "<<endl;
	cout<<fmin(32.5,21)<<endl;
	cout<<"Redondeando 32.5 hacia arriba: "<<endl;
	cout<<ceil(32.5)<<endl;
	cout<<"Redondeando 32.5 hacia abajo: "<<endl;
	cout<<floor(32.5)<<endl;
	cout<<"El resultado de 9 elevado a la 6 es: "<<endl;
	cout<<pow(9,6)<<endl;
	cout<<"Para hallar la raiz cuadrada de 26: "<<endl;
	cout<<sqrt(26)<<endl;
	cout<<"La hipotenusa de un triangulo de 6 y 4 es: "<<endl;
	cout<<hypot(6,4)<<endl;
	
	return 0;
}
