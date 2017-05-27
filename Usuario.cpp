#include "Usuario.h"

Usuario::Usuario(string Username,string Nombre,string Password,int Edad,string Id,string Telefono){
	this->Username=Username;
	this->Password=Password;
	while (Edad < 18) {
		cout << "Edad invalida, ingrese edad de nuevo!" << endl;
		cin >> Edad;
	}
	this->Edad=Edad;
	this->Id=Id;
	while (Telefono.size() < 8) {
		cout << "Telefono invalido, ingrese telefono otra vez!" << endl;
		cin >> Telefono;
	}
	this->Telefono=Telefono;
	this->Nombre=Nombre;
}

Usuario::Usuario(){

}

Usuario::~Usuario(){
	
}


void Usuario::setUsername(string Username){
	this-> Username=Username;
}

string Usuario::getUsername(){
	return Username;
}

void Usuario::setNombre(string Nombre){
	this->Nombre=Nombre;
}

string Usuario::getNombre(){
	return Nombre;
}

void Usuario::setPassword(string Password){
	this-> Password=Password;
}

string Usuario::getPassword(){
	return Password;
}

void Usuario::setEdad(int Edad){
	while (Edad < 18) {
		cout << "Edad invalida, ingrese edad de nuevo!" << endl;
		cin >> Edad;
	}
	this-> Edad=Edad;
}

int Usuario::getEdad(){
	return Edad;
}

void Usuario::setId(string Id){
	this-> Id=Id;
}

string Usuario::getId(){
	return Id;
}

void Usuario::setTelefono(string Telefono){
	while (Telefono.size() < 8) {
		cout << "Telefono invalido, ingrese telefono otra vez!" << endl;
		cin >> Telefono;
	}
	this-> Telefono=Telefono;
}

string Usuario::getTelefono(){
	return Telefono;
}
