#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
#include "Persona.h"
#include "Cliente.h"
#include "Repartidor.h"
#include "Empleado.h"
#include "Negocio.h"
#include "Producto.h"
#include "Ordenes.h"
#include <vector>
using std::vector;
#include <typeinfo>

int main()
{
    char resp = 's';
    int opcion = 0, opcion_operacion = 0, opcion_persona = 0, edad = 0, hrstrabajo = 0, pedidoscliente = 0, ordenesrepartidor = 0, ordenesempleado = 0, ganancias = 0, eliminar_persona = 0, contnegocios = 0;
    string nombre, identidad, direccion, telefono, t_credito, placamoto, zonatrabajo, localtrabajo;
    vector<Persona *> personas;
    vector<Producto *> productos;
    vector<Negocio *> negocios;
    while (resp == 's' || resp == 's')
    {
        cout << "1. Persona " << endl
             << "2. Negocios " << endl
             << "3. Ordenes" << endl
             << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "1. Agregar Persona" << endl
                 << "2. Eliminar Personas " << endl
                 << "3. Listar Personas " << endl
                 << "Ingrese opcion: ";
            cin >> opcion_operacion;
            switch (opcion_operacion)
            {
            case 1: 
                cout << "1. Agregar Cliente" << endl
                     << "2. Agregar Repartidor" << endl
                     << "3. Agregar Empleado" << endl
                     << "Ingrese opcion: ";
                cin >> opcion_persona;
                cout << "Ingrese nombre: ";
                cin >> nombre;
                cout << "Ingrese numero de identidad: ";
                cin >> identidad;
                cout << "Ingrese edad: ";
                cin >> edad;
                switch (opcion_persona)
                {
                case 1:
                {
                    cout << "Ingrese direccion: ";
                    cin >> direccion;
                    cout << "Ingrese numero de telefono: ";
                    cin >> telefono;
                    cout << "Ingrese tarjeta de credito: ";
                    cin >> t_credito;
                    personas.push_back(new Cliente(nombre, identidad, edad, ganancias, direccion, telefono, t_credito, pedidoscliente));
                    break;
                }
                case 2:
                {
                    cout << "Ingrese placa de moto: ";
                    cin >> placamoto;
                    cout << "Ingrese zona de trabajo: ";
                    cin >> zonatrabajo;
                    personas.push_back(new Repartidor(nombre, identidad, edad, ganancias, placamoto, zonatrabajo, ordenesrepartidor));
                    break;
                }
                case 3:
                {
                    cout << "Ingrese horas de trabajo: ";
                    cin >> hrstrabajo;
                    cout << "Ingrese local de trabajo: ";
                    cin >> localtrabajo;
                    personas.push_back(new Empleado(nombre, identidad, edad, ganancias, hrstrabajo, localtrabajo, ordenesempleado));
                    break;
                }
            break;
            case 2:
                for (int i = 0; i < personas.size(); i++)
                {
                    cout << i + 1 << ". ";
                    cout << personas[i]->toString();
                    cout << personas[i]->admganancias();
                    cout << endl;
                }
                cout << "Ingrese posicion a eliminar: ";
                cin >> eliminar_persona;
                personas.erase(personas.begin() + eliminar_persona);
                break;
            case 3:
                for (int i = 0; i < personas.size(); i++)
                {
                    if (dynamic_cast<Cliente*>(personas[i])
                    {
                        cout << "Clientes" << endl;
                        cout << i + 1 << ". ";
                        cout << personas[i]->toString();
                        cout << personas[i]->admganancias();
                        cout << endl;
                            }else if(dynamic_cast<Repartidor*>(personas[i]){
                        cout << "Repartidores" << endl;
                        cout << i + 1 << ". ";
                        cout << personas[i]->toString();
                        cout << personas[i]->admganancias();
                        cout << endl;
                            } else {
                        cout << "Empleados: " << endl;
                        cout << i + 1 << ". ";
                        cout << personas[i]->toString();
                        cout << personas[i]->admganancias();
                        cout << endl;
                    }
                }
            }
        break;
        case 2:
            {
                int opcion_negocio = 0;
                cout << "1. Agregar Negocio " << endl
                     << "2. Eliminar y listar Negocios: " << endl;
                cin >> opcion_negocio;
                switch (opcion_negocio)
                {
                    case 1:
                    {
                        string nombre_negocio, ubicacion, nombre_producto, tipo;
                        int locales = 0;
                        cout << "Ingrese nombre del negocio: ";
                        cin >> nombre_negocio;
                        cout << "Ingrese ubicacion: ";
                        cin >> ubicacion;
                        cout << "Ingrese numero de locales: ";
                        cin >> locales;
                        char respproducto = 's';
                        while (respproducto == 's' || respproducto == 'S')
                        {
                            cout << "Ingrese nombre del producto: ";
                            cin >> nombre_producto;
                            cout << "Ingrese tipo de producto(Comestible o no comestible):";
                            cin >> tipo;
                            productos.push_back(new Producto(nombre_producto, tipo));
                            cout << "Desea agregar otro producto[s/n]: ";
                            cin >> respproducto;
                        }
                        negocios.push_back(new Negocio(nombre_negocio, ubicacion, locales));
                        negocios[contnegocios]->setproductos(productos);
                    break;
                    }
                    case 2:
                    {
                        for (int i = 0; i < negocios.size(); i++)
                        {
                            cout << negocios[i]->toString();
                            cout << endl;
                        }
                    }
                    break;
                }
        break;
        case 3:

        break;
        }
    }
}
    }
    }
