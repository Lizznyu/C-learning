#include<iostream>
using namespace std;
int main(){
    int i=0;
    char continuar;
    cout<<"¿Desea contar numeros de dos en dos? Digite S para si: ";
    cin>>continuar;
    while (continuar !='N')
    {
        i=i+2;
        cout<<i<<endl;
        cout<<"¿Desea continuar Digite S: ";
        cin>>continuar;
    }
    cout<<endl;
    return 0;
}