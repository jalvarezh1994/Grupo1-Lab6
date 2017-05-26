#include "Cliente.h"

Cliente::Cliente(string Direccion,int Estrellas){
    this->Direccion=Direccion;
    this->Estrellas=Estrellas;
}
Cliente::Cliente(){

}void Cliente::setDireccion(string Direccion){
   this-> Direccion=Direccion;
}
string Cliente::getDireccion(){
   return Direccion;
}
void Cliente::setEstrellas(int Estrellas){
   this-> Estrellas=Estrellas;
}
int Cliente::getEstrellas(){
   return Estrellas;
}
