#include<iostream>
using namespace std;
int main(){
    int edad;
    cout<<"¿QUE EDAD TIENE SU HIJO?: ";
    cin>>edad;
    if (edad>0 and edad<=6)
    {
        cout<<"El niño pertenece al grupo de la primera infancia";
    }
    else if (edad>6 and edad<=12)
    {
        cout<<"El niño pertenece al grupo de la segunda infacia";
    }
    else if (edad>12 and edad<=18)
    {
        cout<<"Pertenece al grupo de los adolescentes";
    }
    else { cout<<"No es un niño";
    }
    return 0;
}