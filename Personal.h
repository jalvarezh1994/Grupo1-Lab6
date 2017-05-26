#include <iostream>
#include <string>

using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal{
    protected:
        int AnioContratado;
    public:
        Personal(int);
        Personal();
        int getAnioContratado();
        void setAnioContratado(int);

};
#endif