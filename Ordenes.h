#ifndef Ordenes_H
#define Ordenes_H
#include <string>
using std::string;
#include "Negocio.h"
#include "Repartidor.h"
#include "Cliente.h"

class Ordenes
{
private:
    Cliente* cliente;
    Negocio* negocio;
    Repartidor* repartidor;
    string tipo;
    string estado;
    Producto* producto;

public:
    Ordenes();
    Ordenes(Cliente*, Negocio*, Repartidor*, string, string, Producto*);

    Cliente* getcliente();
    void setcliente(Cliente*);

    Negocio* getnegocio();
    void setnegocio(Negocio*);

    Repartidor* getrepartidor();
    void setrepartidor(Repartidor*);

    string gettipo();
    void settipo(string);

    string getestado();
    void setestado(string);

    Producto* getproducto();
    void setproducto(Producto*);

    string toString();
};
#endif
