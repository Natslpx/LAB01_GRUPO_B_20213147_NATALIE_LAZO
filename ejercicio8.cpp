/*8. Escribir un programa que calcule la media de x cantidad números introducidos por el
teclado.*/
#include<iostream>
using namespace std;

int main()
{
    int n, num, suma=0;
    float media;
    cout<<"¿Cuántos números vas agregar?";cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Número "<<i<<" :"; cin>>num;
        suma=suma+num;
    }

    cout<<"La media es: "<<float (suma)/n;

    return 0;
}
