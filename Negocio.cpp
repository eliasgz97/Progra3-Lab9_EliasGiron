#include "Negocio.h"

Negocio::Negocio()
{
}
Negocio::Negocio(string nombre, string ubicacion, int locales)
{

    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->locales = locales;
}
string Negocio::getnombre()
{
    return nombre;
}
void Negocio::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Negocio::getubicacion()
{
    return ubicacion;
}
void Negocio::setubicacion(string ubicacion)
{
    this->ubicacion = ubicacion;
}

int Negocio::getlocales()
{
    return locales;
}
void Negocio::setlocales(int locales)
{
    this->locales = locales;
}

vector<Producto *> Negocio::getproductos()
{
    return productos;
}
void Negocio::setproductos(vector<Producto *> productos)
{
    this->productos = productos;
}
string Negocio::toString()
{
    return "";
}
