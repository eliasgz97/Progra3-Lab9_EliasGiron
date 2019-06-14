#include "Cliente.h"

Cliente::Cliente()
{
}
Cliente::Cliente(string nombre, string identidad, int edad, int ganancias, string direccion, string telefono, string tarjetacredito, int pedidoshechos):Persona (nombre, identidad, edad, ganancias)
{

    this->direccion = direccion;
    this->telefono = telefono;
    this->tarjetacredito = tarjetacredito;
    this->pedidoshechos = pedidoshechos;
}
string Cliente::getdireccion()
{
    return direccion;
}
void Cliente::setdireccion(string direccion)
{
    this->direccion = direccion;
}

string Cliente::gettelefono()
{
    return telefono;
}
void Cliente::settelefono(string telefono)
{
    this->telefono = telefono;
}

string Cliente::gettarjetacredito()
{
    return tarjetacredito;
}
void Cliente::settarjetacredito(string tarjetacredito)
{
    this->tarjetacredito = tarjetacredito;
}

int Cliente::getpedidoshechos()
{
    return pedidoshechos;
}
void Cliente::setpedidoshechos(int pedidoshechos)
{
    this->pedidoshechos = pedidoshechos;
}
string Cliente::toString()
{
    return Persona::toString()+"Direccion: "+direccion+"\n"+telefono+"\n"+tarjetacredito+"\n";
}
int Cliente::admganancias(){
    return pedidoshechos*(-100);
}
