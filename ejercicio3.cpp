/* Elabore un programa que solicite ingresar una hora del día
(HH:MM en formato de cadena), solicite un tiempo en minutos a
agregar, y retorne la hora de finalización (el formato de salida
debe de estar en AM o PM según corresponda).*/

#include<iostream>
#include <time.h>
using namespace std;


int main()
{
    char horaActual [6];
    int minutos, hh, mm;
    cout<<"¿Qué hora es? (formato HH:MM): ";cin>>horaActual;
    cout<<"¿Cúántos minutos desea agregar? ";cin>>minutos;

    hh=(horaActual[0]-'0')*10+(horaActual[1]-'0');
    mm=(horaActual[3]-'0')*10+(horaActual[4]-'0');

    mm=mm+minutos;

    hh=hh+(mm/60);
    mm=mm%60;

    hh=hh%24;

    if(hh<12)
    {
        cout<<hh<<":"<<mm<<" AM";
    }
    else
    {
        hh=hh%12;
        cout<<hh<<":"<<mm<<" PM";
    }
    return 0;
}
