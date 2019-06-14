#ifndef Cliente_H
#define Cliente_H
#include "Persona.h"

class Cliente: public Persona
{
private:
    string direccion;
    string telefono;
    string tarjetacredito;
    int pedidoshechos;

public:
    Cliente();
    Cliente(string, string, int, int, string, string, string, int);

    string getdireccion();
    void setdireccion(string);

    string gettelefono();
    void settelefono(string);

    string gettarjetacredito();
    void settarjetacredito(string);

    int getpedidoshechos();
    void setpedidoshechos(int);

    string toString();
    virtual int admganancias();
};
#endif
