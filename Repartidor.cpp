#include "Repartidor.h"

Repartidor::Repartidor()
{
}
Repartidor::Repartidor(string nombre, string identidad, int edad, int ganancias, string placamoto, string zonatrabajo, int ordenesatendidas) : Persona(nombre, identidad, edad, ganancias)
{

    this->placamoto = placamoto;
    this->zonatrabajo = zonatrabajo;
    this->ordenesatendidas = ordenesatendidas;
}
string Repartidor::getplacamoto()
{
    return placamoto;
}
void Repartidor::setplacamoto(string placamoto)
{
    this->placamoto = placamoto;
}

string Repartidor::getzonatrabajo()
{
    return zonatrabajo;
}
void Repartidor::setzonatrabajo(string zonatrabajo)
{
    this->zonatrabajo = zonatrabajo;
}

int Repartidor::getordenesatendidas()
{
    return ordenesatendidas;
}
void Repartidor::setordenesatendidas(int ordenesatendidas)
{
    this->ordenesatendidas = ordenesatendidas;
}
string Repartidor::toString()
{
    return Persona::toString()+placamoto+"\n"+zonatrabajo+"\n";
}
int Repartidor::admganancias()
{
    return ordenesatendidas*40;
}
