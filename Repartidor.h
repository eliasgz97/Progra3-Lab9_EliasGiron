#ifndef Repartidor_H
#define Repartidor_H
#include "Persona.h"

class Repartidor : public Persona
{
private:
    string placamoto;
    string zonatrabajo;
    int ordenesatendidas;

public:
    Repartidor();
    Repartidor(string, string, int, int, string, string, int);

    string getplacamoto();
    void setplacamoto(string);

    string getzonatrabajo();
    void setzonatrabajo(string);

    int getordenesatendidas();
    void setordenesatendidas(int);

    string toString();
    virtual int admganancias();

    //string nombre, string identidad, int edad, int ganancias
};
#endif
