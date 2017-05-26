#include "Chef.h"
#include "Personal.h"

Chef::Chef(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Sueldo,string PlatilloFavorito,int Rating){
	this->PlatilloFavorito=PlatilloFavorito;
	this->Rating=Rating;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
	this->Nombre=Nombre;
	this->Sueldo=Sueldo;
}

Chef::Chef(){

}

Chef::~Chef(){

}

void Chef::setPlatilloFavorito(string PlatilloFavorito){
	this-> PlatilloFavorito=PlatilloFavorito;
}

string Chef::getPlatilloFavorito(){
	return PlatilloFavorito;
}

void Chef::setRating(int Rating){
	this-> Rating=Rating;
}

int Chef::getRating(){
	return Rating;
}
