//operadores asignacion
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Vamos a necesitar dos numeros"<<endl;
	cout<<"Digite el primer numero"<<endl;cin>>a;
	cout<<"Digite el segundo numero"<<endl;cin>>b;
	cout<<"El resultado de las operaciones aritmeticas entre dichos numeros es"<<endl;
	cout<<a<<"+"<<b<<"="<<endl;
	a+=b;
	cout<<a<<endl;
	cout<<a<<"-"<<b<<"="<<endl;
	a-=b;
	cout<<a<<endl;
	cout<<a<<"*"<<b<<"="<<endl;
	a*=b;
	cout<<a<<endl;
	cout<<a<<"/"<<b<<"="<<endl;
	a/=b;
	cout<<a<<endl;
	return 0;
	
}
