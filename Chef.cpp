#include "Chef.h"
#include "Personal.h"

Chef::Chef(string Username,string Password,int Edad,string Id,string Telefono,int AnioContratado,string PlatilloFavorito,int Rating){
	this->PlatilloFavorito=PlatilloFavorito;
	this->Rating=Rating;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
}

Chef::Chef(){

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
