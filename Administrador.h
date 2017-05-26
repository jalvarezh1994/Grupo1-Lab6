#include <iostream>
#include <string>
#include "Usuario.h"
#include "Personal.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador:public Personal{
    protected:
        int Contratados;
        int Despedidos;
    public:
        Administrador(string,string,string,int,string,string,int,double,int,int);
        Administrador();
        ~Administrador();
        int getContratados();
        void setContratados(int);

        int getDespedidos();
        void setDespedidos(int);

};
#endif
