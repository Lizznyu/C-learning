#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout<<"Ingrese el numero que desea descomponer en factores primos: ";
    cin>>numero;
	
	cout<<"\nDescomponiendo en factores primos: ";
	for(int divisor=2;numero>1;divisor++){
		while(numero%divisor==0){
			cout<<divisor<<" ";
			numero /= divisor;//numero=numero/divisor

		}
	}
    return 0;
}