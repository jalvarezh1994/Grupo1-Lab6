#include <iostream>
#include <string>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H

class Usuario{
    protected:
        string Username;
        string Password;
        int Edad;
        string Id;
        string Telefono;
    public:
        Usuario(string,string,int,string,string);
        Usuario();
        virtual ~Usuario();
        string getUsername();
        void setUsername(string);

        string getPassword();
        void setPassword(string);

        int getEdad();
        void setEdad(int);

        string getId();
        void setId(string);

        string getTelefono();
        void setTelefono(string);
       // virtual string toString();
};

#endif
