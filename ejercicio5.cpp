/* Elabore un código que reciba como entrada una secuencia de caracteres que contiene
un numero flotante y retorne el número redondeado*/

#include <cmath>
#include<iostream>
using namespace std;

int main()
{
    double numero;
    cout<<"Escriba un número flotante:";cin>>numero;

    cout<<"El número "<<numero<<" redondeado es: "<<round(numero);
    return 0;
}
