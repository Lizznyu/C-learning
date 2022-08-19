#include <iostream>
using namespace std;
int main (){
    int numeros []={2,3,5,7,11,13,17};
    int multiplicacion=1;
    for (int ordenVariable = 0; ordenVariable  < 7; ordenVariable++)
    {
        multiplicacion*=numeros[ordenVariable];
    }
    cout<<"La multiplicacion de los numeros es: "<<multiplicacion;
    
    return 0;
}