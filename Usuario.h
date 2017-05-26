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
        string Nombre;
    public:
        Usuario(string,string,string,int,string,string);
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

        string getNombre();
        void setNombre(string);
       // virtual string toString();
};

#endif
