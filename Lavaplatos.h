#include <iostream>
#include <string>

using namespace std;

#ifndef LAVAPLATOS_H
#define LAVAPLATOS_H
class Lavaplatos{
    protected:
        double Motivacion;
    public:
        Lavaplatos(double);
        Lavaplatos();
        double getMotivacion();
        void setMotivacion(double);

};
#endif