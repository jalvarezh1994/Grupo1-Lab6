#include <iostream>
#include <string>

using namespace std;

#ifndef MESERO_H
#define MESERO_H
class Mesero{
    protected:
        string Platillos;
    public:
        Mesero(string);
        Mesero();
        string getPlatillos();
        void setPlatillos(string);

};
#endif