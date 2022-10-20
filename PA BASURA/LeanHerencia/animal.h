#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal{
    private:
        string nombre;
        int hambre;
        int higiene;
    public:
        Animal(string);
        virtual void alimentarse();
        virtual void lavarse();
        //~animal();
};

#endif