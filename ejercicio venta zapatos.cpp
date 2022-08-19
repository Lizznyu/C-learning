/*Ejercicio sena le ofrecen zapatos al por mayor y a un buen precio. Ella
decide desarrollar una aplicacion en el lenguaje C++ que le ofrezca realizar calculos para
determinar costos, margen de ganancias y proyectar sus ventas.*/

#include <iostream>
using namespace std;
int main()
{

	double ref, talla, costoFabricacion, costoVenta, cantidadZapatos, costoFabricacionTotal,
		costoVentaTotal, utilidadUnidad, utilidadTotal;
	double porcentajeUtilidad;
	char descripcionZapato[30];
	char disponibilidad;

	cout << "Digite la referencia del zapato: ";
	cin >> ref;
	cin.ignore(256, '\n');
	cout << "Digite la descripcion del zapato: ";
	cin.getline(descripcionZapato, 30);
	cout << "Digite la talla del zapato: ";
	cin >> talla;
	cout << "Digite la letra S si esta disponible o la letra N si no esta disponible: ";
	cin >> disponibilidad;
	cout << "Digite la cantidad de zapatos deseada: ";
	cin >> cantidadZapatos;
	cout << "Digite el costo de fabricacion del zapato: ";
	cin >> costoFabricacion;
	
	cout << "\nLos datos registrados son: \n\n";
	if (costoFabricacion>0.0)
	{
		if (costoFabricacion<=30000)
		{	
			cout<<"Tipo = A";
		}
		else if (costoFabricacion>30000 && costoFabricacion<=60000)
		{
			cout<<"Tipo = B";
		}
		else if (costoFabricacion>60000)
		{
			cout<<"Tipo = C";
		}
	}
	else {cout<<"El valor no representa el costo de fabricacion";}

if (costoFabricacion>0.0)
	{
		if (costoFabricacion<=30000)
		{	
			porcentajeUtilidad=50;
		}
		else if (costoFabricacion>30000 && costoFabricacion<=60000)
		{
			porcentajeUtilidad=40;
		}
		else if (costoFabricacion>60000)
		{
			porcentajeUtilidad=30;
		}
	}
	else {cout<<"El valor no representa el costo de fabricacion";}
	
	costoFabricacionTotal = costoFabricacion * cantidadZapatos;
	costoVenta= costoFabricacion+(costoFabricacion*(porcentajeUtilidad/100)); 
	costoVentaTotal = costoVenta * cantidadZapatos;
	utilidadUnidad = costoVenta - costoFabricacion;
	utilidadTotal = utilidadUnidad * cantidadZapatos;
	
	cout << "\nReferencia: " << ref << endl;
	cout << "Descripcion: " << descripcionZapato << endl;
	cout << "Talla: " << talla << endl;
	cout << "Disponibilidad: " << disponibilidad << endl;
	cout << "Cantidad de zapatos: " << cantidadZapatos << endl;
	cout << "Costo de fabricacion: " << costoFabricacion << endl;
	cout << "Costo total de fabricacion: " << costoFabricacionTotal << endl;
	cout << "Costo de venta: " << costoVenta << endl;
	cout << "Costo total de venta: " << costoVentaTotal << endl;
	cout << "Utilidad por unidad: " << utilidadUnidad << endl;
	cout << "Utilidad total: " << utilidadTotal << endl;
	cout << "Porcentaje de utilidad: " << porcentajeUtilidad << endl;
	cout << "\nGracias por digitar la informacion";

	return 0;
}
