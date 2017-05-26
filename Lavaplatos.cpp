#include "Lavaplatos.h"
#include "Personal.h"

Lavaplatos::Lavaplatos(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Sueldo,double Motivacion){
    this->Motivacion=Motivacion;
    this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
	this->Nombre=Nombre;
	this->Sueldo=Sueldo;
}

Lavaplatos::Lavaplatos(){

}

void Lavaplatos::setMotivacion(double Motivacion){
   this-> Motivacion=Motivacion;
}

double Lavaplatos::getMotivacion(){
   return Motivacion;
}
