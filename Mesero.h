#include <iostream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Personal.h"

using namespace std;

#ifndef MESERO_H
#define MESERO_H

class Mesero:public Personal{
    private:
        vector<string> Platillos;
    public:
        Mesero(string,string,string,int,string,string,int,double);
        Mesero();
        virtual ~Mesero();

        void setPlatillo(string);
        void entregarPlatillo(int);
        void entregarTodosP();
        int tamano();

        void imprimirPlatillos();
};
#endif