#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <typeinfo>
#include <fstream>
#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Mesero.h"

using namespace std;
void guardarArchivo(vector<Usuario*>);


int main(){
	vector<Usuario*> u;
	Cliente c("jalvarez","Jorge","asdf",23,"0801","98202419","Honduras",7);
	u.push_back(&c);
	Mesero m("jalvarez","Jorge","asdf",23,"0801","98654",5,15.5);
	u.push_back(&m);
	guardarArchivo(u);
	cout<<cantPersonal(u);
}

vector<Usuario*> eliminarUsuario(vector<Usuario*> usuarios){
	int i;
	cout<<"Ingrese la posición del usuario que desea eliminar: "<<endl;
	cin>>i;
	usuarios.erase(usuarios.begin()+i);
	return usuarios;
}

double promedio(vector<Usuarios> Usuarios){
	int cantPersonal=0;
	double suma=0;
	double promedio;
	for (int i = 0; i < Usuarios.size(); ++i)
	{
		if (dynamic_cast<Personal>(Usuarios[i]))
		{	
			Personal temp=dynamic_cast<Personal>(Usuarios[i]);
			suma+=temp.getSueldo();
			cantPersonal++;
		}
	}
	promedio=suma/cantPersonal;
	return cantPersonal;
}

void guardarArchivo(vector<Usuario*> Usuarios){
	//Clientes
	string Clientes="";
	string Administradores="";
	string Chefs="";
	string Lavaplatoss="";
	string Meseros="";
	for (int i = 0; i < Usuarios.size(); ++i)
	{
		if(dynamic_cast<Cliente*>(Usuarios[i]))
		{
			Cliente* temp=dynamic_cast<Cliente*>(Usuarios[i]);
			Clientes+=temp->getUsername()+" ";
			Clientes+=temp->getNombre()+" ";
			Clientes+=temp->getPassword()+" ";
			Clientes+=to_string(temp->getEdad())+" ";
			Clientes+=temp->getId()+" ";
			Clientes+=temp->getTelefono()+" ";
			Clientes+=temp->getDireccion()+" ";
			Clientes+=to_string(temp->getEstrellas())+" ";
			Clientes+="\n";
		}
		if(dynamic_cast<Administrador*>(Usuarios[i]))
		{
			Administrador* temp=dynamic_cast<Administrador*>(Usuarios[i]);
			Administradores+=temp->getUsername()+" ";
			Administradores+=temp->getNombre()+" ";
			Administradores+=temp->getPassword()+" ";
			Administradores+=to_string(temp->getEdad())+" ";
			Administradores+=temp->getId()+" ";
			Administradores+=temp->getTelefono()+" ";
			Administradores+=to_string(temp->getAnioContratado())+" ";
			Administradores+=to_string(temp->getSueldo())+" ";
			Administradores+=to_string(temp->getContratados())+" ";
			Administradores+=to_string(temp->getDespedidos())+" ";
			Administradores+="\n";
		}
		if(dynamic_cast<Chef*>(Usuarios[i]))
		{
			Chef* temp=dynamic_cast<Chef*>(Usuarios[i]);
			Chefs+=temp->getUsername()+" ";
			Chefs+=temp->getNombre()+" ";
			Chefs+=temp->getPassword()+" ";
			Chefs+=to_string(temp->getEdad())+" ";
			Chefs+=temp->getId()+" ";
			Chefs+=temp->getTelefono()+" ";
			Chefs+=to_string(temp->getAnioContratado())+" ";
			Chefs+=to_string(temp->getSueldo())+" ";
			Chefs+=temp->getPlatilloFavorito()+" ";
			Chefs+=to_string(temp->getRating())+" ";
			Chefs+="\n";
		}
		if(dynamic_cast<Lavaplatos*>(Usuarios[i]))
		{
			Lavaplatos* temp=dynamic_cast<Lavaplatos*>(Usuarios[i]);
			Lavaplatoss+=temp->getUsername()+" ";
			Lavaplatoss+=temp->getNombre()+" ";
			Lavaplatoss+=temp->getPassword()+" ";
			Lavaplatoss+=to_string(temp->getEdad())+" ";
			Lavaplatoss+=temp->getId()+" ";
			Lavaplatoss+=temp->getTelefono()+" ";
			Lavaplatoss+=to_string(temp->getAnioContratado())+" ";
			Lavaplatoss+=to_string(temp->getSueldo())+" ";
			Lavaplatoss+=to_string(temp->getMotivacion())+" ";
			Lavaplatoss+="\n";
		}
		if(dynamic_cast<Mesero*>(Usuarios[i]))
		{
			Mesero* temp=dynamic_cast<Mesero*>(Usuarios[i]);
			Meseros+=temp->getUsername()+" ";
			Meseros+=temp->getNombre()+" ";
			Meseros+=temp->getPassword()+" ";
			Meseros+=to_string(temp->getEdad())+" ";
			Meseros+=temp->getId()+" ";
			Meseros+=temp->getTelefono()+" ";
			Meseros+=to_string(temp->getAnioContratado())+" ";
			Meseros+=to_string(temp->getSueldo())+" ";
			Meseros+="\n";
		}
	}
	cout<<Clientes;
	ofstream archivo;
	string nombreArchivo;
	archivo.open("Clientes.txt",ios::out);
	archivo<<Clientes;
	archivo.close();
	archivo.open("Administradores.txt",ios::out);
	archivo<<Administradores;
	archivo.close();
	archivo.open("Chefs.txt",ios::out);
	archivo<<Chefs;
	archivo.close();
	archivo.open("Administradores.txt",ios::out);
	archivo<<Administradores;
	archivo.close();
	archivo.open("Lavaplatos.txt",ios::out);
	archivo<<Lavaplatoss;
	archivo.close();
	archivo.open("Meseros.txt",ios::out);
	archivo<<Meseros;
	archivo.close();
}