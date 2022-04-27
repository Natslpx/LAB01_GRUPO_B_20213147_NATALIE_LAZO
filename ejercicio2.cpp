/* Escriba un código que solicite el primer nombre de una persona,
 el apellido paterno y el apellido materno. Retornar su correo UNSA
 generado, el cual consiste de la primera letra del nombre, el apellido
 paterno completo, y la primera letra del apellido materno.
 (se agrega el dominio de la universidad al final).*/

#include<iostream>
using namespace std;

int main()
{
    string nombre, apellidoP, apellidoM;
    cout<<"Ingrese su primer nombre: ";cin>>nombre;
    cout<<"Ingrese su apellido paterno: ";cin>>apellidoP;
    cout<<"Ingrese su apellido materno: ";cin>>apellidoM;

    cout<<"Su correo UNSA es: ";
    cout<<nombre[0]<<apellidoP<<apellidoM[0]<<"@unsa.edu.pe";


    return 0;
}
