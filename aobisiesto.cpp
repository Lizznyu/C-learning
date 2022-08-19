#include<iostream>
using namespace std;
int main (){
    int año, bisiesto;
    cout<<"PROGRAMA PARA DETERMINAR SI UN AÑO ES BISISESTO";
    cout<<"\nIngrese el año: ";
    cin>>año;
    if (año%4==0 && año%100==0 && año%400==0)
    {
    
      cout<<"El año "<<año<<" es bisiesto";
      
    }
    else {
        cout<<"El año "<<año<<" no es bisiesto";
    }
    
    return 0;
}