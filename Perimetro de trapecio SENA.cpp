//perimetro figuras
#include<iostream>
using namespace std;
int main(){
	float lado_1,lado_2,base_mayor,base_menor,perimetro;
	cout<<"Programa para hallar el perimetro de un trapecio"<<endl;
	cout<<"Digite el lado 1: ";cin>>lado_1;
	cout<<"Digite el lado2: ";cin>>lado_2;
	cout<<"Digite la base mayor: ";cin>>base_mayor;
	cout<<"Digite la base menor: ";cin>>base_menor;
	perimetro=lado_1+lado_2+base_mayor+base_menor;
	cout<<"El perimetro del trapecio es: "<<perimetro;
	return 0;
}
