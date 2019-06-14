#ifndef Empleado_H
#define Empleado_H

#include "Persona.h"

class Empleado:public Persona
{
private:
    int hrstrabajo;
    string local;
    int ordenes;

public:
    Empleado();
    Empleado(string, string, int, int, int, string, int);

    int gethrstrabajo();
    void sethrstrabajo(int);

    string getlocal();
    void setlocal(string);

    int getordenes();
    void setordenes(int);

    string toString();
    virtual int admganancias();
};
#endif
