#include <iostream>// se incluye la librería iostream que maneja los flujos de entrada/salida
using namespace std;//se usa el espacio de nombre std para evitar confusiones en los nombres
int main() //la función principal
{
 int a,b,c,h; //se declaran las variables
 //recuerda que C++ es un lenguaje fuertemente tipado
 a=2;
 b=3;
 c=0;
 h=0;
 if(a>b)
 {
 c=3;
 a=0;
 }
 else if(a==4)
 {
 h=5;
 b=0;
 }
 cout<<"a="<<a<<" b="<<b<<" c="<<c<<" h="<<h<<endl;
 cin>>a;
 return 0;
}