#ifndef LAGARTIJA_H
#define LAGARTIJA_H
#include "animal.h"

class Lagartija : public Animal{
    private: 
        string especie;
    public:
        Lagartija(string, string,  string, float, float);
        void lavarse();
        void alimentarse();
        void pasar_tiempo();
};

#endif