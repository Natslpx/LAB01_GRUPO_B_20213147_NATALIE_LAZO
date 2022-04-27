/*. Escriba un código que solicite al usuario ingresar dos números
enteros y que muestre el producto de ambos.*/

#include<iostream>
using namespace std;

int main()
{
    int numero1, numero2;

    cout<<"Ingrese un número entero: ";cin>>numero1;
    cout<<"Ingrese otro número entero: "; cin>>numero2;

    cout<<"Su producto es: "<<numero1*numero2;
    return 0;
}
