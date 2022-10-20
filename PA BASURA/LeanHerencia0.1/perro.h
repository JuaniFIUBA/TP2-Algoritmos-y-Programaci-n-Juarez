#ifndef PERRO_H
#define PERRO_H
#include "animal.h"

class Perro : public Animal{
    private:
        string especie;
    public:
        Perro(string, string,  string, int, int);
        void lavarse();
        void alimentarse();
};

#endif