#include "Administrador.h"

Administrador::Administrador(int Contratados,int Despedidos){
    this->Contratados=Contratados;
    this->Despedidos=Despedidos;
}
Administrador::Administrador(){

}void Administrador::setContratados(int Contratados){
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
