#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal:public Usuario{
    protected:
        int AnioContratado;
    public:
        Personal(string,string,int,string,string,int);
        Personal();
        int getAnioContratado();
        void setAnioContratado(int);

};
#endif