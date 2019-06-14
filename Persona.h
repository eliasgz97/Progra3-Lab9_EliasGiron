#ifndef Persona_H
#define Persona_H
#include <string>
#include <iostream>
using std::string;

class Persona
{
private:
    string nombre;
    string identidad;
    int edad;
    int ganancias;

public:
    Persona();
    Persona(string, string, int, int);

    string getnombre();
    void setnombre(string);

    string getidentidad();
    void setidentidad(string);

    int getedad();
    void setedad(int);

    int getganancias();
    void setganancias(int);

    string toString();
    virtual int admganancias();
};
#endif