//ejercicio operadores
#include<iostream>
using namespace std;
int main(){
	int v1, v2, suma, resta, mult, div, mod, resultado;
	cout<<"Vamos a realizar operaciones aritmeticas"<<endl;
	cout<<"Digite el primer numero"<<endl;cin>>v1;
	cout<<"Digite el segundo numero"<<endl;cin>>v2;
	suma=v1+v2;
	resta=v1-v2;
	mult=v1*v2;
	div=v1/v2;
	mod=v1%v2;
	
	cout<<"El resultado de las operaciones aritmeticas entre dichos numeros es"<<endl;
	cout<<v1<<"+"<<v2<<"="<<suma<<endl;
	cout<<v1<<"-"<<v2<<"="<<resta<<endl;
	cout<<v1<<"*"<<v2<<"="<<mult<<endl;
	cout<<v1<<"/"<<v2<<"="<<div<<endl;
	cout<<v1<<"%"<<v2<<"="<<mod<<endl;

	return 0;
}
