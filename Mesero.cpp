#include "Mesero.h"

Mesero::Mesero(string Username,string Nombre,string Password,int Edad,string Id,string Telefono,int AnioContratado,double Sueldo){
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

void Mesero::setPlatillo(string platillo){
   this-> Platillos.push_back(platillo);
   cout << "Plato agregado exitosamente!" << endl;
}

void Mesero::entregarPlatillo(int pos) {
	Platillos.erase(Platillos.begin() + pos);
	cout << "Platillo entregado exitosamente!" << endl;
}

void Mesero::entregarTodosP() {
	for (int i = 0; i < Platillos.size(); ++i)
	{
		Platillos.erase(Platillos.begin() + i);
	}
	cout << "Platillos entregado exitosamente!" << endl;
}

void Mesero::imprimirPlatillos() {
	for (int i = 0; i < Platillos.size(); ++i)
	{
		cout << i << ") " << Platillos.at(i) << endl;
	}
}

int Mesero::tamano() {
	return Platillos.size();
}