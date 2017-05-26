#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Mesero.h"

using namespace std;

int main(){
	vector<Usuario> vUsuario;
	vector<Cliente> vCliente;
	vector<Personal> vPersonal;
	vector<Administrador> vAdministrador;
	vector<Chef> vChef;
	vector<Lavaplatos> vLavaplatos;
	vector<Mesero> vMesero;
	int opcMenu;
	do{
		cout<<"Menú";
		cout<<"1. Agregar"<<endl;
		cout<<"2. Listar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Eliminar"<<endl;
		cout<<"5. Guardar en archivos de texto"<<endl;
		cout<<"6. Leer de archivos de texto"<<endl;
		cout<<"7. Guardar en binarios"<<endl;
		cout<<"7. Leer de binarios"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Ingrese opción: "<<endl;
		cin>>opcMenu;
		switch(opcMenu){
			case 1:
			
			break;
			case 2:
			cout<<"Menú listar";
			cout<<"1. Usuario";
			cout<<"2. Cliente";
			cout<<"3. Personal";
			cout<<"4. Administrador";
			cout<<"5. Chef";
			cout<<"6. Lavaplatos";
			cout<<"7. Mesero";
			int opcListar;
			cout<<"Ingrese la opción: ";
			cin>>opcListar;
			switch(opcListar){
				case 1:
				for(int i=0;i<vUsuario.size();i++){
					cout<<Username<<" = "<<vUsuario.getUsername();
					cout<<Password<<" = "<<vUsuario.getPassword();
					cout<<Edad<<" = "<<vUsuario.getEdad();
					cout<<Id<<" = "<<vUsuario.getId();
					cout<<Telefono<<" = "<<vUsuario.getTelefono();

				}break;
				case 2:
				for(int i=0;i<vCliente.size();i++){
					cout<<Direccion<<" = "<<vCliente.getDireccion();
					cout<<Estrellas<<" = "<<vCliente.getEstrellas();

				}break;
				case 3:
				for(int i=0;i<vPersonal.size();i++){
					cout<<AnioContratado<<" = "<<vPersonal.getAnioContratado();

				}break;
				case 4:
				for(int i=0;i<vAdministrador.size();i++){
					cout<<Contratados<<" = "<<vAdministrador.getContratados();
					cout<<Despedidos<<" = "<<vAdministrador.getDespedidos();

				}break;
				case 5:
				for(int i=0;i<vChef.size();i++){
					cout<<PlatilloFavorito<<" = "<<vChef.getPlatilloFavorito();
					cout<<Rating<<" = "<<vChef.getRating();

				}break;
				case 6:
				for(int i=0;i<vLavaplatos.size();i++){
					cout<<Motivacion<<" = "<<vLavaplatos.getMotivacion();

				}break;
				case 7:
				for(int i=0;i<vMesero.size();i++){
					cout<<Platillos<<" = "<<vMesero.getPlatillos();

				}break;
			}
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
			break;
		}
	}while(opcMenu!=8);
}

vector<Usuario> agregarUsuario(){
	cout<<"Menú agregar";
	cout<<"1. Usuario";
	cout<<"2. Cliente";
	cout<<"3. Personal";
	cout<<"4. Administrador";
	cout<<"5. Chef";
	cout<<"6. Lavaplatos";
	cout<<"7. Mesero";
	int opcAgregar;
	cout<<"Ingrese la opción: ";
	cin>>opcAgregar;
	switch(opcAgregar){
		case 1:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			Usuario temporal(username,nombre,password,edad,id,telefono);
			return temporal;
			break;
		}
		case 2:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			string direccion;
			cout<<"Ingrese direccion: ";
			cin>>direccion;
			int estrellas;
			cout<<"Ingrese estrellas: ";
			cin>>estrellas;
			Cliente temporal(username,nombre,password,edad,id,telefono,direccionestrellas);
			return temporal;
			break;
		}
		case 3:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			int aniocontratado;
			cout<<"Ingrese aniocontratado: ";
			cin>>aniocontratado;
			double sueldo;
			cout<<"Ingrese sueldo: ";
			cin>>sueldo;
			Personal temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo);
			return temporal;
			break;
		}
		case 4:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			int contratados;
			cout<<"Ingrese contratados: ";
			cin>>contratados;
			int despedidos;
			cout<<"Ingrese despedidos: ";
			cin>>despedidos;
			Administrador temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,contratados,despedidos);
			return temporal;
			break;
		}
		case 5:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			string platillofavorito;
			cout<<"Ingrese platillofavorito: ";
			cin>>platillofavorito;
			int rating;
			cout<<"Ingrese rating: ";
			cin>>rating;
			Chef temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,platillofavorito,rating);
			return temporal;
			break;
		}
		case 6:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			double motivacion;
			cout<<"Ingrese motivacion: ";
			cin>>motivacion;
			Lavaplatos temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,motivacion);
			return temporal;
			break;
		}
		case 7:{
			string username;
			cout<<"Ingrese username: ";
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cin>>nombre;
			cout<<"Ingrese password: ";
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cin>>telefono;
			string platillos;
			cout<<"Ingrese platillos: ";
			cin>>platillos;
			Mesero temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,platillos);
			return temporal;
			break;
		}
	}
}