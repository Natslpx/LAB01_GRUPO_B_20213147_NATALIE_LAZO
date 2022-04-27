/* 9. Escribir un programa que lea 10 datos desde el teclado
 y sume sólo aquellos que sean negativos.*/
#include<iostream>
using namespace std;

int main()
{
    const int n=10;
    int dato;
    int suma=0;

    for(int i=0;i<n;i++)
    {
        cout<<"dato "<<i+1<<" = ";cin>>dato;
        if(dato<0)
        {
            suma+=dato;
        }
    }
    cout<<"suma = "<<suma;

    return 0;
}
