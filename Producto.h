#ifndef Producto_H
#define Producto_H
#include <string>
using std::string;

class Producto
{
private:
    string nombre;
    string tipo;

public:
    Producto();
    Producto(string, string);

    string getnombre();
    void setnombre(string);

    string gettipo();
    void settipo(string);

    string toString();
};
#endif
