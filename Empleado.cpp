#include "Empleado.h"
using std::string;
using std::to_string;

Empleado::Empleado()
{
}
Empleado::Empleado(string nombre, string identidad, int edad, int ganancias, int hrstrabajo, string local, int ordenes):Persona(nombre, identidad, edad, ganancias)
{
    this->hrstrabajo = hrstrabajo ;
    this->local = local; 
    this->ordenes = ordenes;
}
int Empleado::gethrstrabajo()
{
    return hrstrabajo;
}
void Empleado::sethrstrabajo(int hrstrabajo)
{
    this->hrstrabajo = hrstrabajo;
}

string Empleado::getlocal()
{
    return local;
}
void Empleado::setlocal(string local)
{
    this->local = local;
}

int Empleado::getordenes()
{
    return ordenes;
}
void Empleado::setordenes(int ordenes)
{
    this->ordenes = ordenes;
}
string Empleado::toString()
{
    return Persona::toString()+to_string(hrstrabajo)+"\n"+local+"\n";
}
int Empleado::admganancias(){
    return 30*ordenes+ordenes;
}
