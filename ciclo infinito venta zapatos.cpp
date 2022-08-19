#include <iostream>
using namespace std;
int main()
{
	double ref, talla, costoFabricacion,i=0;
	char descripcionZapato[30];
	char disponibilidad, continuar;
	cout<<"¿Desea registrar un zapato? s o n: ";
	cin>>continuar;
	while (continuar!='n')
	{
	cout<<"\nDigite la referencia del zapato: ";
	cin >> ref;
	cin.ignore(256, '\n');
	cout << "Digite la descripcion del zapato: ";
	cin.getline(descripcionZapato, 30);
	cout << "Digite la talla del zapato: ";
	cin >> talla;
	cout << "Digite la letra S si esta disponible o la letra N si no esta disponible: ";
	cin >> disponibilidad;
	cout << "Digite el costo de fabricacion del zapato: ";
	cin >> costoFabricacion;
	cout<<"\n¿Desea continuar? Digite n para terminar: ";
	cin>>continuar;
	}
	cout<<"\n\nGracias por registrar la informacion";
	return 0;
}
