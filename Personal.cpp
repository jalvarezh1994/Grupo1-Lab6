#include "Personal.h"
#include "Usuario.h"

Personal::Personal(string Username,string Password,int Edad,string Id,string Telefono,int AnioContratado){
	this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
}

Personal::Personal(){

}

void Personal::setAnioContratado(int AnioContratado){
	this-> AnioContratado=AnioContratado;
}

int Personal::getAnioContratado(){
	return AnioContratado;
}
