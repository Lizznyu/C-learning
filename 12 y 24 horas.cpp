#include <iostream>
using namespace std;
int main (){
    float hora12, hora24, minutos;
    cout<<"Digite la hora en formato de 24 horas: ";
    cin>>hora24;
    cout<<"Digite los minutos: ";
    cin>>minutos;
    if (hora24>12)
    {
        hora12=hora24-12;
        cout<<"\nSon las "<<hora12<<" : "<<minutos<<" p. m";
    }
    else if (hora24<12)
    {
        cout<<"\nSon las "<<hora24<<" : "<<minutos<<" a. m";
    }
    else {
        cout<<"\nSon las "<<hora24<<" p. m";
    }
    
    
    return 0;
}
