#ifndef CABALLO_H
#define CABALLO_H
#include "animal.h"

class Caballo : public Animal{
    private:
        string especie;
    public:
        Caballo(string, string,  string, float, float);
        void alimentarse();
};

#endif