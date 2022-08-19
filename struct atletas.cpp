#include<iostream>
using namespace std;
struct atleta
{
    char nombre[30];
    char pais[30];
    int numeroMedallas;
};
int main (){
    int numeroAtletas, mayor=0, posicionRegistroAtleta=0;
    cout<<"¿Cuantos atletas desea registrar? ";
    cin>>numeroAtletas;
    struct atleta atletas [numeroAtletas];
    for (int numeroAtleta = 0; numeroAtleta < numeroAtletas; numeroAtleta++)
    {
        fflush(stdin);
        cout<<"Digite el nombre del atleta "<<numeroAtleta+1<<": ";
        cin.getline(atletas[numeroAtleta].nombre,30);
        cout<<"¿Que pais representa?: ";
        cin.getline(atletas[numeroAtleta].pais, 30);
        cout<<"¿Cuantas medallas ha ganado?: ";
        cin>>atletas[numeroAtleta].numeroMedallas;
        if (atletas[numeroAtleta].numeroMedallas>mayor)
        {
            mayor=atletas[numeroAtleta].numeroMedallas;
            posicionRegistroAtleta=numeroAtleta;
        }
    }
    cout<<"El atleta con mayor numero de medallas es: "<<endl;
    cout<<atletas[posicionRegistroAtleta].nombre<<endl;
    cout<<"Quien representa al país "<<atletas[posicionRegistroAtleta].pais<<endl;
    cout<<"Ha ganado "<<mayor<<" medallas"<<endl;

   return 0; 
}
