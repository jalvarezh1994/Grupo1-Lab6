#include "Lavaplatos.h"
#include "Personal.h"

Lavaplatos::Lavaplatos(string Username,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Motivacion){
    this->Motivacion=Motivacion;
    this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
}

Lavaplatos::Lavaplatos(){

}

void Lavaplatos::setMotivacion(double Motivacion){
   this-> Motivacion=Motivacion;
}

double Lavaplatos::getMotivacion(){
   return Motivacion;
}
