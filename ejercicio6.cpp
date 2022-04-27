/*Elabore un código que solicite un numero entre
100 < x < 999 y muestre el resultado en binario.*/
#include<iostream>
#include <bitset>
using namespace std;

int main()
{
    int numero;
    cout<<"Escriba un número entre 100 a 999"<<endl;
    cout<<"Escriba un número entero: ";cin>>numero;
    if(numero>100 && numero<999)
    {
        bitset<32> binario(numero);
        cout<<"El número "<<numero<< " en binario es: "<< binario;
    }
    else
    {
        cout<<"Elija un número que sea mayor a 100 y menor a 999";
    }


    return 0;
}
