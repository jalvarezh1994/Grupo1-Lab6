#include <iostream>
#include <string>
#include "Usuario.h"
#include "Personal.h"

using namespace std;

#ifndef MESERO_H
#define MESERO_H

class Mesero:public Personal{
    protected:
        vector<string> Platillos;
    public:
        Mesero(string,string,string,int,string,string,int,double);
        Mesero();
        virtual ~Mesero();
        string getPlatillos();
        void setPlatillos(string);
};
#endif