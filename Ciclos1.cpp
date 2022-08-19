#include<iostream>
using namespace std;
int main(){
    int numero, resultado=0;
    cout<<"Digita un numero para hallar los multiplos: ";
    cin>>numero;
    cout<<"Los multiplos de "<<numero<<" son: "<<endl;
    while(resultado<100)
    {resultado+=numero;
    cout<<resultado<<endl;
    }
    return 0;
}