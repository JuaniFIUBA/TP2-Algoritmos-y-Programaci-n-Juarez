#ifndef CONEJO_H
#define CONEJO_H
#include "animal.h"

class Conejo : public Animal{
    private:
        string especie;
    public:
        Conejo(string, string,  string, float, float);
        void alimentarse();
};

#endif