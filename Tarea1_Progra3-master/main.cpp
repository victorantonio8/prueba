#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b;
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b;
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b;
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if(a>b)
    {
        return a;
    }else
    {
        return b;
    }
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
if(a<b)
    {
        return a;
    }
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
     if(a>b && a>c)
        return a;
    if(b>c)
        return b;
    return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{

arreglo[posicion]=valor;

}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor = arreglo[0];
    for(int cont = 0;cont<tamano;cont++)
    {
        if(mayor<arreglo[cont])
        {
            mayor=arreglo[cont];
        }
    }
    return mayor;
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int a=arreglo[0];
    for(int i=0; i<tamano;i++)
        {
          if(a>arreglo[i])
            {
              a=arreglo[i];
            }
        }return a;
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{

   int a=0;
    for(int i=0; i<tamano;i++)
        {
         a=a+arreglo[i];
        }
    a=a/tamano;
    return a;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
