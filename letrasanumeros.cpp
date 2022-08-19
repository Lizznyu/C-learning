#include <iostream>
using namespace std;
/* TEXTO SEPARADO POR ESPACIOS, 
   EJEMPLO "CUARENTA Y CINCO" = ["CUARENTA","Y","CINCO"]
                                    0        1     2
*/
string TEXTO_SEPARADO_POR_ESPACIOS[3];//limite de posiciones arreglo o array en ingles
string NUMEROS_DEL_UNO_AL_CINCUENTA[51] = {"uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","diez","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve","veinte","veintiuno","veintidos","veintitres","veinticuatro","veinticinco","veintiseis","veintisiete","veintiocho","veintinueve","treinta","treinta y uno","treinta y dos","treinta y tres","treinta y cuatro","treinta y cinco","treinta y seis","treinta y siete","treinta y ocho","treinta y nueve","cuarenta","cuarenta y uno","cuarenta y dos","cuarenta y tres","cuarenta y cuatro","cuarenta y cinco","cuarenta y seis","cuarenta y siete","cuarenta y ocho","cuarenta y nueve","cincuenta"};

/*Funcion que obtiene el tamñao de un string  
  ejemplo hola i= 4 cuarenta y nueve i=16
*/
int len(string str)//obtener el tamaño de un string
{
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
/*
  separa el texto en un arreglo separado por medio de un separador dado.
  EJEMPLO
  TEXTO = "CUARENTA Y CINCO"
  APLICANDO LA FUNCION, ENVIO EL TEXTO Y EL SEPARADOR ESPACIO (" ")
  LA FUNCION SEPARARÁ POR ESPACIOS A UN ARREGLO DE STRING
  arreglo[3] = ["CUARETA","Y","CINCO"]

  SI EL SEPARADOR ES DISTINTO ¿QUE PASARIA?
  EJEMPLO APLICANDO SEPARADOR "Y"
  RESULTADO
  arreglo[3] = ["CUARENTA "," CINCO"] 
*/
void split(string texto, char separador)
{
    int posicionActual = 0, i = 0;
    int posicionInicial = 0, posicionFinal = 0;
    while (i <= len(texto))
    {
        if (texto[i] == separador || i == len(texto))
        {
            posicionFinal = i;
            string subStr = ""; 
            subStr.append(texto, posicionInicial, posicionFinal - posicionInicial);

            TEXTO_SEPARADO_POR_ESPACIOS[posicionActual] = subStr;
            posicionActual += 1;
            posicionInicial = posicionFinal + 1;
        }
        i++;
    }
}

/*Me limpia el arreglo que contiene los numeros
  EJEMPLO:
  arreglo[0] = "ciento"
  arreglo[1] = "cuarenta"
  arreglo[2] = "y"
  arreglo[3] = "cuatro"
  APLICADA LA FUNCION EL ARREGLO QUEDARÍA
  arreglo[0] = ""
  arreglo[1] = ""
  arreglo[2] = ""
  arreglo[3] = ""
  ES COMO UN CLEAR
*/
void clearArray(){
    TEXTO_SEPARADO_POR_ESPACIOS[0]="";
    TEXTO_SEPARADO_POR_ESPACIOS[1]="";
    TEXTO_SEPARADO_POR_ESPACIOS[2]="";
    TEXTO_SEPARADO_POR_ESPACIOS[3]="";
}

int centenasANumero(string centena)
{
    if (centena == "cien")
    {
        return 100;
    }
    if (centena == "ciento")
    {
        return 100;
    }
    if (centena == "doscientos")
    {
        return 200;
    }
    if (centena == "trescientos")
    {
        return 300;
    }
    if (centena == "cuatrocientos")
    {
        return 400;
    }
    if (centena == "quinientos")
    {
        return 500;
    }
    if (centena == "seiscientos")
    {
        return 600;
    }
    if (centena == "setecientos")
    {
        return 700;
    }
    if (centena == "ochocientos")
    {
        return 800;
    }
    if (centena == "novecientos")
    {
        return 900;
    }
}

int decenasANumero(string decena)
{
    if (decena == "diez")
    {
        return 10;
    }
    if (decena == "treinta")
    {
        return 30;
    }
    if (decena == "cuarenta")
    {
        return 40;
    }
    if (decena == "cincuenta")
    {
        return 50;
    }
    if (decena == "sesenta")
    {
        return 60;
    }
    if (decena == "setenta")
    {
        return 70;
    }
    if (decena == "ochenta")
    {
        return 80;
    }
    if (decena == "noventa")
    {
        return 90;
    }
    return centenasANumero(decena);
}

int unidadesANumero(string unidades)
{
    if (unidades == "uno")
    {
        return 1;
    }
    if (unidades == "dos")
    {
        return 2;
    }
    if (unidades == "tres")
    {
        return 3;
    }
    if (unidades == "cuatro")
    {
        return 4;
    }
    if (unidades == "cinco")
    {
        return 5;
    }
    if (unidades == "seis")
    {
        return 6;
    }
    if (unidades == "siete")
    {
        return 7;
    }
    if (unidades == "ocho")
    {
        return 8;
    }
    if (unidades == "nueve")
    {
        return 9;
    }
    if (unidades == "diez")
    {
        return 10;
    }
    if (unidades == "once")
    {
        return 11;
    }
    if (unidades == "doce")
    {
        return 12;
    }
    if (unidades == "trece")
    {
        return 13;
    }
    if (unidades == "catorce")
    {
        return 14;
    }
    if (unidades == "quince")
    {
        return 15;
    }
    if (unidades == "dieciseis")
    {
        return 16;
    }
    if (unidades == "diecisiete")
    {
        return 17;
    }
    if (unidades == "dieciocho")
    {
        return 18;
    }
    if (unidades == "diecinueve")
    {
        return 19;
    }
    if (unidades == "veinte")
    {
        return 20;
    }
    if (unidades == "veintiuno")
    {
        return 21;
    }
    if (unidades == "veintidos")
    {
        return 22;
    }
    if (unidades == "veintitres")
    {
        return 23;
    }
    if (unidades == "veinticuatro")
    {
        return 24;
    }
    if (unidades == "veinticinco")
    {
        return 25;
    }
    if (unidades == "veintiseis")
    {
        return 26;
    }
    if (unidades == "veintisiete")
    {
        return 27;
    }
    if (unidades == "veintiocho")
    {
        return 28;
    }
    if (unidades == "veintinueve")
    {
        return 29;
    }
    
    return decenasANumero(unidades);
}

int textoANumeros(string numeroEnLetras){
    string centena, decena, unidades;
    split(numeroEnLetras, ' ');
    int resultado;
    /*
        Que el espacio en 1 este vacio
        es decir
        ["cuarenta",??]
             0       1
    */
    if (TEXTO_SEPARADO_POR_ESPACIOS[1] == "")
    {
        unidades = TEXTO_SEPARADO_POR_ESPACIOS[0];
        resultado = unidadesANumero(unidades);
        return resultado;
    }
    /*
        Que el espacio en 1 no este vacio
        Y a su vez el espacio en 2 SI este vacio
        es decir
        ["ciento","cinco", ??]
             0       1      2
    */
    else if(TEXTO_SEPARADO_POR_ESPACIOS[1] != "" && TEXTO_SEPARADO_POR_ESPACIOS[2] == ""){
        centena = TEXTO_SEPARADO_POR_ESPACIOS[0];
        decena= TEXTO_SEPARADO_POR_ESPACIOS[1];
        resultado = centenasANumero(centena)+unidadesANumero(decena);
        return resultado;
    }
     /*
        Que el espacio en 2 no este vacio
        Y a su vez el espacio en 3 SI este vacio
        es decir
        ["cuarenta","y", "tres", ??]
             0       1      2     3
    */
    else if (TEXTO_SEPARADO_POR_ESPACIOS[2] != "" && TEXTO_SEPARADO_POR_ESPACIOS[3] == "" )
    {
        decena = TEXTO_SEPARADO_POR_ESPACIOS[0];
        unidades = TEXTO_SEPARADO_POR_ESPACIOS[2];
        resultado = decenasANumero(decena) + unidadesANumero(unidades);
        return resultado;
    }
     /*
        ultima condicion, que los 3 espacios esten lleno
        ejemplo
        ["CIENTO","CUARENTA","Y","CINCO"]
            0          1      2     3
    */
    else if (TEXTO_SEPARADO_POR_ESPACIOS[3] != "")
    {
        centena = TEXTO_SEPARADO_POR_ESPACIOS[0];
        decena = TEXTO_SEPARADO_POR_ESPACIOS[1];
        unidades = TEXTO_SEPARADO_POR_ESPACIOS[3];
        resultado = centenasANumero(centena) + decenasANumero(decena) + unidadesANumero(unidades);
        return resultado;
    }
   

}

void tester (){
    for (int i = 0 ; i<50; i++){
        string numero = NUMEROS_DEL_UNO_AL_CINCUENTA[i];
        cout<<numero<<"="<<textoANumeros(numero)<<endl;
        clearArray();
    }
}
int main()
{
    string numeroEnLetras;
    cout << "Ingrese el numero en letras (ejemplo 333 = trescientos treinta y tres): ";
    getline(cin, numeroEnLetras);
    cout<<textoANumeros(numeroEnLetras);
    return 0;
}