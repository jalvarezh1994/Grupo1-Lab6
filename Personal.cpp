#include "Personal.h"
#include "Usuario.h"

Personal::Personal(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Sueldo){
	while (AnioContratado < 1900) {
		cout << "Numero invalido, ingrese el numero de nuevo!" << endl;
		cin >> AnioContratado;
	}
	this->AnioContratado=AnioContratado;
	this->Username=Username;
	this->Password=Password;
	this->Edad=Edad;
	this->Id=Id;
	this->Telefono=Telefono;
	this->Sueldo=Sueldo;
	this->Nombre=Nombre;
}

Personal::Personal(){

}

Personal::~Personal(){

}

void Personal::setAnioContratado(int AnioContratado){
	while (AnioContratado < 1900) {
		cout << "Numero invalido, ingrese el numero de nuevo!" << endl;
		cin >> AnioContratado;
	}
	this-> AnioContratado=AnioContratado;
}

int Personal::getAnioContratado(){
	return AnioContratado;
}

double Personal::getSueldo(){
	return Sueldo;
}

void Personal::setSueldo(double Sueldo){
	this->Sueldo=Sueldo;
}