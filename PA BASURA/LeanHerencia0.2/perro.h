#ifndef PERRO_H
#define PERRO_H
#include "animal.h"

class Perro : public Animal{
    private:
        string especie;
    public:
        Perro(string, string,  string, float, float);
        void lavarse();
        void alimentarse();
};

#endif