#include "Ordenes.h"

Ordenes::Ordenes()
{
}
Ordenes::Ordenes(Cliente* cliente, Negocio* negocio, Repartidor* repartidor, string tipo, string estado, Producto* producto)
{

    this->cliente = cliente;
    this->negocio = negocio;
    this->repartidor = repartidor;
    this->tipo = tipo;
    this->estado = estado;
    this->producto=producto;
}
Cliente* Ordenes::getcliente()
{
    return cliente;
}
void Ordenes::setcliente(Cliente* cliente)
{
    this->cliente = cliente;
}

Negocio* Ordenes::getnegocio()
{
    return negocio;
}
void Ordenes::setnegocio(Negocio* negocio)
{
    this->negocio = negocio;
}

Repartidor* Ordenes::getrepartidor()
{
    return repartidor;
}
void Ordenes::setrepartidor(Repartidor* repartidor)
{
    this->repartidor = repartidor;
}

string Ordenes::gettipo()
{
    return tipo;
}
void Ordenes::settipo(string tipo)
{
    this->tipo = tipo;
}

string Ordenes::getestado()
{
    return estado;
}
void Ordenes::setestado(string estado)
{
    this->estado = estado;
}
Producto* Ordenes::getproducto(){
    return producto;
}
void Ordenes::setproducto(Producto* producto){
    this->producto=producto;
}
string Ordenes::toString()
{
    return "";
}
