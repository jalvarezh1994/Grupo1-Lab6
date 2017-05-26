#include "Administrador.h"
#include "Usuario.h"
#include "Personal.h"

Administrador::Administrador(string Username,string Nombre,string Password,int Edad,string Id,string Telefono, int AnioContratado,double Sueldo, int Contratados,int Despedidos){
    this->Contratados=Contratados;
    this->Despedidos=Despedidos;
    this->Username=Username;
    this->Password=Password;
    this->Edad=Edad;
    this->Id=Id;
    this->Telefono=Telefono;
    this->AnioContratado=AnioContratado;
    this->Sueldo=Sueldo;
    this->Nombre=Nombre;
}

Administrador::Administrador(){

}

Administrador::~Administrador(){

}

void Administrador::setContratados(int Contratados){
   this-> Contratados=Contratados;
}

int Administrador::getContratados(){
   return Contratados;
}

void Administrador::setDespedidos(int Despedidos){
   this-> Despedidos=Despedidos;
}

int Administrador::getDespedidos(){
   return Despedidos;
}
