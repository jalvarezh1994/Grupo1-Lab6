#include "Mesero.h"

Mesero::Mesero(string Username,string Password,int Edad,string Id,string Telefono,int AnioContratado,string Platillos){
    this->Platillos=Platillos;
    this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
}

Mesero::Mesero(){

}void Mesero::setPlatillos(string Platillos){
   this-> Platillos=Platillos;
}

string Mesero::getPlatillos(){
   return Platillos;
}
