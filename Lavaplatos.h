#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
class Lavaplatos:public Personal{
    protected:
        double Motivacion;
    public:
        Lavaplatos(string,string,int,string,string,int,double);
        Lavaplatos();
        double getMotivacion();
        void setMotivacion(double);
};

#endif