#include <fstream>
using std::ifstream;
#include "Persona.h"
#ifndef PersonajeFileReader_H
#define PersonajeFileReader_H
class PersonajeFileReader
{
private:
    ifstream file;

public:
    void fileOpen(char *);
    void fileClose();
};
#endif