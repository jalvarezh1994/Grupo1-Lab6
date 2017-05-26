#include <iostream>
#include <string>

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H
class Cliente{
    protected:
        string Direccion;
        int Estrellas;
    public:
        Cliente(string,int);
        Cliente();
        string getDireccion();
        void setDireccion(string);

        int getEstrellas();
        void setEstrellas(int);

};
#endif