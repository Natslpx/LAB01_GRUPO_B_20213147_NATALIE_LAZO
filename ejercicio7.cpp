/* Elabore un algoritmo que lea por teclado dos números enteros y determine si uno es
divisor del otro.*/

#include <cmath>
#include<iostream>
using namespace std;

int main()
{
    int numero1, numero2;
    cout<<"Ingrese un número entero: ";cin>>numero1;
    cout<<"Ingrese otro número entero: "; cin>>numero2;

    if(numero1%numero2==0)
    {
        cout<<numero2<<" es divisor de "<<numero1;
    }
    else if(numero2%numero1==0)
    {
        cout<<numero1<<" es divisor de "<<numero2;
    }
    else
    {
        cout<<"Ninguno de los dos número es divisor del otro";
    }

    return 0;
}
