#include<iostream>
using namespace std;

int sumarFactoriales (int n)
{
    int factorial=1, sumaFactorial=0;
    for (int contador=1; contador<=n; contador++)
    {
        factorial *= contador;
        sumaFactorial+=factorial;
    }
    return sumaFactorial;
}
int main (){
    int numero;
    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"\nLa suma de factoriales es: "<<sumarFactoriales(numero);
    return 0;

}