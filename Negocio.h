#ifndef Negocio_H
#define Negocio_H
#include <vector>
using std::vector;
#include <string>
using std::string;
#include "Producto.h"

class Negocio
{
private:
    string nombre;
    string ubicacion;
    int locales;
    vector <Producto *> productos;

public:
    Negocio();
    Negocio(string, string, int);

    string getnombre();
    void setnombre(string);

    string getubicacion();
    void setubicacion(string);

    int getlocales();
    void setlocales(int);

    vector<Producto*> getproductos();
    void setproductos(vector<Producto *>);

    string toString();
};
#endif
