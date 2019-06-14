#include "Persona.h"
using std::to_string;


Persona::Persona()
{
}
Persona::Persona(string nombre, string identidad, int edad, int ganancias)
{

    this->nombre = nombre;
    this->identidad = identidad;
    this->edad = edad;
    this->ganancias = ganancias;
}
string Persona::getnombre()
{
    return nombre;
}
void Persona::setnombre(string nombre)
{
    this->nombre = nombre;
}

string Persona::getidentidad()
{
    return identidad;
}
void Persona::setidentidad(string identidad)
{
    this->identidad = identidad;
}

int Persona::getedad()
{
    return edad;
}
void Persona::setedad(int edad)
{
    this->edad = edad;
}

int Persona::getganancias()
{
    return ganancias;
}
void Persona::setganancias(int ganancias)
{
    this->ganancias = ganancias;
}
int Persona::admganancias(){
    return 0;
}
string Persona::toString()
{
    return "Nombre: "+nombre+" \n"+"Identidad: "+identidad+" \n"+"Edad: "+to_string(edad)+"\n";
}

