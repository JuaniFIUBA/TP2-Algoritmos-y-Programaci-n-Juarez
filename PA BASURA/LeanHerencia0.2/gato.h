#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Gato : public Animal{
    private: 
        string especie;
    public:
        Gato(string, string,  string, float, float);
        void lavarse();
        void alimentarse();
        void pasar_tiempo();
};

#endif