#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    float registro=1, temperatura, sumaTemperatura=0, promedioTemperatura, mayor=0, menor=999;
    do
    {
        cout<<"Registre el valor de la temperatura "<<registro<<" :";
        cin>>temperatura;
        sumaTemperatura+=temperatura;
        promedioTemperatura=sumaTemperatura/registro;
        if (temperatura>mayor)
        {
            mayor=temperatura;
        }
        else if (temperatura<menor)
        {
           menor=temperatura;
        }
        registro++;
    } while (registro<=6);
    cout<<"La temperatura media del dia es: "<<promedioTemperatura<<endl;
    cout<<"La mayor temperatura registrada del día es: "<<mayor<<endl;
    cout<<"La menor temperatura registrada del día es: "<<menor<<endl;
    return 0;
}