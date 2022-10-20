#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Roedor : public Animal{
    private: 
        string especie;
    public:
        Roedor(string, string,  string, float, float);
        void lavarse();
        void alimentarse();
        void pasar_tiempo();
};

#endif