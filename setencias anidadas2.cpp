#include <iostream>
using namespace std;
int main()
{
   float nota;
   cout << "Digitar calificacion: ";
   cin >> nota;
   if (nota > 0.0 && nota < 5.0)
   {
      if (nota < 3)
      {
         cout << "Ha reprobado la materia";
      }
      else 
      {
         cout << "Ha aprobado la materia";
      }
   }
   else
   {
      cout << "La calificacion digitada no es valida";
   }
   return 0;
}