#include "Cliente.h"
#include "Usuario.h"

Cliente::Cliente(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,string Direccion,int Estrellas){
	this->Direccion=Direccion;
	this->Estrellas=Estrellas;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
	this->Nombre=Nombre;
}

Cliente::Cliente(){

}

Cliente::~Cliente(){

}

void Cliente::setDireccion(string Direccion){
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
