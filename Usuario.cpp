#include "Usuario.h"

Usuario::Usuario(string Username,string Password,int Edad,string Id,string Telefono){
  this->Username=Username;
  this->Password=Password;
  this->Edad=Edad;
  this->Id=Id;
  this->Telefono=Telefono;
}

Usuario::Usuario(){

}

void Usuario::setUsername(string Username){
 this-> Username=Username;
}

string Usuario::getUsername(){
 return Username;
}

void Usuario::setPassword(string Password){
 this-> Password=Password;
}

string Usuario::getPassword(){
 return Password;
}

void Usuario::setEdad(int Edad){
 this-> Edad=Edad;
}

int Usuario::getEdad(){
 return Edad;
}

void Usuario::setId(string Id){
 this-> Id=Id;
}

string Usuario::getId(){
 return Id;
}

void Usuario::setTelefono(string Telefono){
 this-> Telefono=Telefono;
}

string Usuario::getTelefono(){
 return Telefono;
}