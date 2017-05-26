#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

#ifndef CHEF_H
#define CHEF_H
class Chef:public Personal{
    protected:
        string PlatilloFavorito;
        int Rating;
    public:
        Chef(string,string,string,int,string,string,int,double,string,int);
        Chef();
        virtual ~Chef();
        string getPlatilloFavorito();
        void setPlatilloFavorito(string);

        int getRating();
        void setRating(int);

};
#endif