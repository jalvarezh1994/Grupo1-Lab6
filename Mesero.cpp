#include "Mesero.h"

Mesero::Mesero(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Sueldo){
    this->Platillos=Platillos;
    this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
	this->Sueldo=Sueldo;
	this->Nombre=Nombre;
}

Mesero::Mesero(){

}

Mesero::~Mesero(){

}

void Mesero::setPlatillos(string Platillos){
   this-> Platillos=Platillos;
}

string Mesero::getPlatillos(){
   return Platillos;
}
