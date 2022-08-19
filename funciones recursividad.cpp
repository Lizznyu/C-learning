#include <iostream>
using namespace std;
int serieFibonacci (int numero){
    int sumaSerie;
    if (numero<2)
    {
        return numero;
    }
    else{
        
        return serieFibonacci(numero-1)+serieFibonacci(numero-2);
    }
    
}
int main (){
    int numero;
    cout<<"Digite el numero de elementos: ";
    cin>>numero;
    cout<<"El resultado de la suma es: "<<serieFibonacci(numero);

    return 0;
}