#ifndef GATO_H
#define GATO_H
#include "animal.h"

class Gato : public Animal{
    private: 
        string especie;
    public:
        Gato(string, string);
        void lavarse();
        void alimentarse();
};

#endif