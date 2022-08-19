#include <iostream> //sirve para traer la libreria de donde se tomaran las funciones
using namespace std; //sirve para definir un espacio de nombres un identificador para que no colisione con otros espacios y es una estructura standard
int main(){//es la funcion principal
 int a, b;//son los numeros enteros y como se denominaran en el programa en este caso a y b
 cout << "Ingresa el primer numero"<<endl;//se le pide al usuario que digite un numero mostrando este letrero y el endl es un salto de linea
 cin >> a;//se guarda el numero digitado como la variable entera a
 cout << "Ingresa el segundo numero"<<endl;//se le pide al usuario que digite otro numero mostrando este letrero
 cin >> b;//se guarda el numero digitado como la variable entera b
 cout <<"La suma de los numeros es: "<< a+b <<endl;//se muestra un letrero que indica la funcion realizada en este caso la suma de ambos numeros
 cout <<"La resta de los numeros es: "<< a-b <<endl;//se muestra un letrero que indica la funcion realizada en este caso la resta de ambos numeros
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;//se muestra un letrero que indica la funcion realizada en este caso la multiplicacion de ambos numeros
 cout <<"La division de los numeros es: "<< a/b <<endl;//se muestra un letrero que indica la funcion realizada en este caso la division de ambos numeros
 cout <<"El residuo es: "<< a%b <<endl;//se muestra un letrero que indica la funcion realizada en este caso el residuo de ambos numeros

 system("pause");//el sistema se pausa 
 return EXIT_SUCCESS;//permite definir lo que es adecuado o el fallo del sistema
}