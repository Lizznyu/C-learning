#include <iostream>
using namespace std;
void cambiarBilletesUno(int dolares)
{
    int unidades, decenas, centenas, millar;
    unidades = dolares % 10;
    dolares /= 10;
    decenas = dolares % 10;
    dolares /= 10;
    centenas = dolares % 10;
    dolares /= 10;
    millar = dolares % 10;
    dolares /= 10;

    if (millar >= 1 && millar <= 9)
    {
        cout << " Se necesitan " << millar * 10 << " billetes de cien"<<endl;
    }
    if (centenas >=1 && centenas <=9)
    {
        cout << " Se necesitan "<<centenas<<" billetes de cien" << endl;
    }
    
    switch (decenas)
    {
    case 1:
        cout << " Se necesitan 1 billete de diez" << endl;
        break;
    case 2:
        cout << " Se necesitan 1 billete de veinte" << endl;
        break;
    case 3:
        cout << " Se necesitan 1 billete de veinte y 1 billete de diez" << endl;
        break;
    case 4:
        cout << " Se necesitan 2 billetes de veinte" << endl;
        break;
    case 5:
        cout << " Se necesitan 1 billete de cincuenta" << endl;
        break;
    case 6:
        cout << " Se necesitan 1 billete de cincuenta y 1 billete de diez" << endl;
        break;
    case 7:
        cout << " Se necesitan 1 billete de cincuenta y 1 billete de veinte" << endl;
        break;
    case 8:
        cout << " Se necesitan 1 billete de cincuenta, 1 billete de veinte y un billete de diez" << endl;
        break;
    case 9:
        cout << " Se necesitan 1 billete de cincuenta y 2 billetes de veinte" << endl;
        break;
    default:
        break;
    }
    switch (unidades)
    {
    case 1:
        cout << " Se necesitan 1 billete de uno" << endl;
        break;
    case 2:
        cout << " Se necesitan 2 billetes de uno" << endl;
        break;
    case 3:
        cout << " Se necesitan 3 billetes de uno" << endl;
        break;
    case 4:
        cout << " Se necesitan 4 billetes de uno" << endl;
        break;
    case 5:
        cout << " Se necesitan 1 billete de cinco" << endl;
        break;
    case 6:
        cout << " Se necesitan 1 billete de cinco y 1 billete de uno" << endl;
        break;
    case 7:
        cout << " Se necesitan 1 billete de cinco y 2 billetes de uno" << endl;
        break;
    case 8:
        cout << " Se necesitan 1 billete de cinco y 3 billetes de uno" << endl;
        break;
    case 9:
        cout << " Se necesitan 1 billete de cinco y 4 billete de uno" << endl;
        break;
    default:
        break;
    }
}
void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno){
	cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;
}
void mostrarCambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cout << "\nEl cambio para: "
         << "$" << dolares << " es:" << endl;
    cout << cien << " billetes de $100" << endl;
    cout << cincuenta << " billetes de $50" << endl;
    cout << veinte << " billetes de $20" << endl;
    cout << diez << " billetes de $10" << endl;
    cout << cinco << " billetes de $5" << endl;
    cout << uno << " billetes de $1" << endl;
};

int main()
{
    int dolares;
    int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
    cout << "¿cuanto dinero desea cambiar?: ";
    cin >> dolares;
    // cambiarBilletesUno (dolares);
    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    mostrarCambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);

    return 0;
}