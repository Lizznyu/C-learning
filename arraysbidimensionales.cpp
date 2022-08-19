#include <iostream>
using namespace std;
int main (){
    int numeros [3][3]{2,3,4,4,6,8,6,9,12};
    for (int ordenVariablesFilas = 0; ordenVariablesFilas < 3; ordenVariablesFilas++)
    {
        for (int ordenVariablesColumnas = 0; ordenVariablesColumnas < 3; ordenVariablesColumnas++)
        {
            if (ordenVariablesFilas==ordenVariablesColumnas)
            {
                cout<<numeros[ordenVariablesFilas][ordenVariablesColumnas]<<" ";
            }
        }
        cout<<"\n";
    }
    
    return 0;
}