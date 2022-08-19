#include <iostream>
using namespace std;
int suma (int numero_1, int numero_2);
int main(){
	int a, b;
	cout<<"Digite un numero: ";
	cin>>a;
	cout<<"Digite un numero: ";
	cin>>b;
	
	cout<<"La suma de los numeros es: "<<suma(a,b);
	
	return 0;
}

int suma(int numero_1, int numero_2)
{
	return numero_1+numero_2;
}
