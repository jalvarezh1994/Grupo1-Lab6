#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal:public Usuario{
    protected:
        int AnioContratado;
        double Sueldo;
    public:
        Personal(string,string,string,int,string,string,int,double);
        Personal();
        virtual ~Personal();
        int getAnioContratado();
        void setAnioContratado(int);

};
#endif