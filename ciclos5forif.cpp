#include<iostream>
using namespace std;
int main(){
    int edad, hombres=0,mujeres=0,edadesMasculino=0,edadesFemenino=0;
    char genero;
    float promedioMasculino, promedioFemenino;
    int i;
    for ( i = 0; i <=4; i++)
    {
        cout<<"Digite el genero de la persona M/F: ";
        cin>>genero;
        cout<<"Digite la edad de la persona: ";
        cin>>edad;
        if (genero =='M')
        {
            hombres++;
            edadesMasculino+=edad;
            promedioMasculino=edadesMasculino/hombres;
        }
        else if (genero=='F')
        {
            mujeres++;
            edadesFemenino+=edad;
            promedioFemenino=edadesFemenino/mujeres;
        }
    }
    cout<<"Total de hombres: "<<hombres<<endl;
    cout<<"Promedio de edades de los hombres: "<<promedioMasculino<<endl;
    cout<<"Total de mujeres: "<<mujeres<<endl;
    cout<<"Promedio de edades de las mujeres: "<<promedioFemenino<<endl;
    return 0;
}