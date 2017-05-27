#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Usuario.h"
#include "Cliente.h"
#include "Personal.h"
#include "Administrador.h"
#include "Chef.h"
#include "Lavaplatos.h"
#include "Mesero.h"

using namespace std;

int menu();
void promedioClientes(vector<Usuario*>);
Usuario agregarUsuario();
vector<Usuario*> eliminarUsuario(vector<Usuario*>, int);
double aumentarS(double);
double decrementarS(double);

int main() {
	vector<Usuario*> usuarios;
	usuarios.push_back(new Administrador("admin123", "Pedro" ,"pass123", 20, "0801182519855", "99558844", 1992, 5000, 15, 6));
	bool seguir = true;
	cout << "Bienvenido al Restaurante: - Como vos Querras! -." << endl;

	while (seguir == true) {
		int resp1 = menu();

		if (resp1 == 1)
		{
			bool user = false, pass = false, enter = false, enter2 = false;
			int userM;
			while (enter == false) {
				cout << "Ingrese el nombre de usuario: " << endl;
				string nombre1;
				cin >> nombre1;
				cout << "Ingrese la contraseña: " << endl;
				string contra1;
				cin >> contra1;
				for (int i = 0; i < usuarios.size(); ++i)
				{
					if (usuarios.at(i) -> getUsername() == nombre1)
					{
						user = true;
					}

					if (usuarios.at(i) -> getPassword() == contra1) 
					{
						pass = true;
					}

					if (user == true && pass == true)
					{
						userM = i;
						enter = true;
						enter2 = true;
					} else {
						user = false;
						pass = false;
					}
				}
				if (enter == false)
				{
					cout << "Desea salir?" << endl;
					cout << "1) Salir" << endl;
					cout << "2) Seguir tratando" << endl;
					int resp0;
					cin >> resp0;

					if (resp0 == 1)
					{
						enter = true;
					} else {
						enter = false;
					}
				}
			}

			if (enter2 == true)
			{
				bool seguir2 = true;
				while(seguir2 == true) {
					if (dynamic_cast<Cliente*>(usuarios.at(userM)))
					{
						Cliente* temp1 = dynamic_cast<Cliente*>(usuarios.at(userM));
						cout << "Que desea hacer?" << endl;
						cout << "1) Dar rating" << endl;
						cout << "2) Salir" << endl;
						int resp2;
						cin >> resp2;
						while (resp2 < 1 || resp2 > 2) {
							cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
							cin >> resp2;
						 						if (resp2 == 1)
						{
							cout << "Ingrese el rating del 1 - 5 que desea darle al restaurante: " << endl;
							int rating;
							cin >> rating;
							while (rating < 0 || rating > 5) {
								cout << "Rating invalido, ingrese su rating de nuevo." << endl;
								cin >> rating;
							}
							temp1 -> setEstrellas(rating);
							usuarios.at(userM) = temp1;
							cout << "Rating guardado exitosamente!" << endl;
							promedioClientes(usuarios);

						} else {
							seguir2 = false;
						}
					} else if (dynamic_cast<Personal*>(usuarios.at(userM)))
					{
						if (dynamic_cast<Administrador*>(usuarios.at(userM)))
						{
							Administrador* temp2 = dynamic_cast<Administrador*>(usuarios.at(userM));
							cout << "Que desea hacer?" << endl;
							cout << "1) Agregar Usuario" << endl;
							cout << "2) Eliminar Usuario" << endl;
							cout << "3) Aumentar o Decrementar de acuerdo de la inflacion" << endl;
							cout << "4) Imprimir usuario(s) con el menor salario" << endl;
							cout << "5) Imprimir usuario(s) con el mayor salario" << endl;
							cout << "6) Conseguir promedio de los salarios" << endl;
							cout << "7) Salir" << endl;
							int resp3;
							cin >> resp3;
							while (resp3 < 1 || resp3 > 7) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> resp3;
							}

							if (resp3 == 1)
							{
								Usuario a = agregarUsuario();
								Usuario* ptra = new Usuario();
								*ptra = a;
								usuarios.push_back(ptra);
								cout << "Usuario agregado exitosamente!" << endl;
							} else if (resp3 == 2)
							{
								usuarios = eliminarUsuario(usuarios, userM);
							} else if (resp3 == 3)
							{
								cout << "Que desea hacer?" << endl;
								cout << "1) Aumentar" << endl;
								cout << "2) Decrementar" << endl;
								int resP2;
								cin >> resP2;
								while (resP2 < 1 || resP2 > 2) {
									cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
									cin >> resP2;
								}
								if (resP2 == 1)
								{
									cout << "A quien le desea aumentar el salario?" << endl;
									for (int i = 0; i < usuarios.size(); ++i)
									{
										if (i != userM)
										{
											cout << i << ") " << usuarios.at(i) -> getNombre() << endl;
										}
									}
									int resP3;
									cin >> resP3;
									while (resP3 < 1 || resP3 > 2) {
										cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
										cin >> resP3;
									}
									if (dynamic_cast<Personal*>(usuarios.at(resP3)))
									{
										Personal* tempo = dynamic_cast<Personal*>(usuarios.at(resP3));
										tempo -> setSueldo(aumentarS(tempo -> getSueldo()));
										usuarios.at(resP3) = tempo;
										cout << "El salario fue aumentado exitosamente!" << endl;
									} else {
										cout << "Este usuario no tiene salario!" << endl;
									}
								} else {
									cout << "A quien le desea decrementar el salario?" << endl;
									for (int i = 0; i < usuarios.size(); ++i)
									{
										if (i != userM)
										{
											cout << i << ") " << usuarios.at(i) -> getNombre() << endl;
										}
									}
									int resP3;
									cin >> resP3;
									while (resP3 < 1 || resP3 > 2) {
										cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
										cin >> resP3;
									}
									if (dynamic_cast<Personal*>(usuarios.at(resP3)))
									{
										Personal* tempo = dynamic_cast<Personal*>(usuarios.at(resP3));
										tempo -> setSueldo(aumentarS(tempo -> getSueldo()));
										usuarios.at(resP3) = tempo;
										cout << "El salario fue decrementado exitosamente!" << endl;
									} else {
										cout << "Este usuario no tiene salario!" << endl;
									}
								}
							} else if (resp3 == 4)
							{
								/* code */
							} else if (resp3 == 5)
							{
								/* code */
							} else if (resp3 == 6)
							{
								/* code */
							} else {
								seguir2 = false;
							}

						} else if (dynamic_cast<Chef*>(usuarios.at(userM)))
						{
							Chef* temp3 = dynamic_cast<Chef*>(usuarios.at(userM));
							cout << "Que desea hacer?" << endl;
							cout << "1) Gritarle a un lavaplatos" << endl;
							cout << "2) Agradar a un lavaplatos" << endl;
							cout << "3) Salir" << endl;
							int resp4;
							cin >> resp4;
							while (resp4 < 1 || resp4 > 3) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> resp4;
							}

							if (resp4 == 1)
							{
								cout << "Cuanta motivacion desea quitarle al lavaplatos?" << endl;
								double motivacionQ;
								cin >> motivacionQ;

								cout << "A cual empleado le desea gritar?" << endl;
								for (int i = 0; i < usuarios.size(); ++i)
								{
									if (i != userM)
									{
										cout << i << ") " << usuarios.at(i) -> getNombre();
									}
								}
								int respB;
								cin >> respB;
								while (respB < 0 || respB > usuarios.size() || respB == userM) {
									cout << "Opcion invalida, ingrese su opcion de nuevo!" << endl;
									cin >> respB;
								}
								Lavaplatos* tempL = dynamic_cast<Lavaplatos*>(usuarios.at(respB));
								tempL -> setMotivacion(tempL -> getMotivacion() - motivacionQ);
								usuarios.at(respB) = tempL; 
								cout << "Gritada ejecutada exitosamente!" << endl;
							} else if (resp4 == 2)
							{
								cout << "Cuanta motivacion desea darle al lavaplatos?" << endl;
								double motivacionA;
								cin >> motivacionA;

								cout << "A cual empleado le desea agradar?" << endl;
								for (int i = 0; i < usuarios.size(); ++i)
								{
									if (i != userM)
									{
										cout << i << ") " << usuarios.at(i) -> getNombre();
									}
								}
								int respB;
								cin >> respB;
								while (respB < 0 || respB > usuarios.size() || respB == userM) {
									cout << "Opcion invalida, ingrese su opcion de nuevo!" << endl;
									cin >> respB;
								}
								Lavaplatos* tempL2 = dynamic_cast<Lavaplatos*>(usuarios.at(respB));
								tempL2 -> setMotivacion(tempL2 -> getMotivacion() + motivacionA);
								usuarios.at(respB) = tempL2;
								cout << "Agradada ejecutada exitosamente!" << endl;
							} else {
								seguir2 == false;
							}

						} else if (dynamic_cast<Lavaplatos*>(usuarios.at(userM)))
						{
							Lavaplatos* temp4 = dynamic_cast<Lavaplatos*>(usuarios.at(userM));
							cout << "Que desea hacer?" << endl;
							cout << "1) Renunciar" << endl;
							cout << "2) Pedir aumento" << endl;
							cout << "3) Salir" << endl;
							int resp5;
							cin >> resp5;
							while (resp5 < 1 || resp5 > 3) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> resp5;
							}

							if (resp5 == 1)
							{
								if (temp4 -> getMotivacion() <= 25)
								{
									usuarios.erase(usuarios.begin() + userM);
									cout << "Lavaplatos se fue del establecimiento." << endl;
									seguir2 == false;
								} else {
									cout << "La motivacion del lavaplatos no es suficientemente baja para renunciar." << endl;
								}
							} else if (resp5 == 2)
							{
								if (temp4 -> getMotivacion() >= 100)
								{
									cout << "De cuanto sera el aumento del lavaplatos?" << endl;
									int aumento;
									cin >> aumento;
									while (aumento > temp4 -> getSueldo()) {
										cout << "El aumento no puede ser mayor al saldo actual del lavaplatos, ingrese aumento de nuevo." << endl;
										cin >> aumento;
									}
									temp4 -> setSueldo(temp4 -> getSueldo() + aumento);
									usuarios.at(userM) = temp4;
									cout << "Aumento aplicado!" << endl;
								} else {
									cout << "La motivacion del lavaplatos no es suficientemente alta para pedir aumento." << endl;
								}
							} else {
								seguir2 == false;
							}

						} else if (dynamic_cast<Mesero*>(usuarios.at(userM)))
						{
							Mesero* temp5 = dynamic_cast<Mesero*>(usuarios.at(userM));
							cout << "Que desea hacer?" << endl;
							cout << "1) Agregar Ṕlatillo" << endl;
							cout << "2) Entregar Platillo" << endl;
							cout << "3) Entregar todos los platillos" << endl;
							cout << "4) Salir" << endl;
							int resp6;
							cin >> resp6;
							while (resp6 < 1 || resp6 > 4) {
								cout << "Opcion invalida, ingrese su opcion de nuevo." << endl;
								cin >> resp6;
							}

							if (resp6 == 1)
							{
								cout << "Ingrese el nombre del platillo: " << endl;
								string nombreP;
								cin >> nombreP;
								temp5 -> setPlatillo(nombreP);
								usuarios.at(userM) = temp5;
							} else if (resp6 == 2)
							{
								cout << "Cual platillo desea servir?" << endl;
								temp5 -> imprimirPlatillos();
								int resP;
								cin >> resP;
								while (resP < 1 || resP > temp5 -> tamano()) {
									cout << "Numero invalido, ingrese su opcion de nuevo!" << endl;
									cin >> resP;
								}
								temp5 -> entregarPlatillo(resP);
								usuarios.at(userM) = temp5;
							} else if (resp6 == 3)
							{
								temp5 -> entregarTodosP();
								usuarios.at(userM) = temp5;
							} else {
								seguir2 == false;
							}
						}
					}
				}
			}
		} else {
			cout << "Nos vemos luego!" << endl;
			seguir = false;
		}
	}

	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Ingresar al sistema\n";
	cout << "2) Salir\n";
	int resp;
	cin >> resp;
	return resp;
}

void promedioClientes(vector<Usuario*> usuarios) {
	double total;
	int cont;
	Cliente* temp;
	for (int i = 0; i < usuarios.size(); ++i)
	{
		if (dynamic_cast<Cliente*>(usuarios.at(i)))
		{
			temp = dynamic_cast<Cliente*>(usuarios.at(i));
			total = total + (temp -> getEstrellas());
			cont++;
		}
	}
	total = total / cont;
	cout << "El numero de estrellas del restaurante es de: " << total << endl;
}

Usuario agregarUsuario(){
	cout<<"Menú agregar";
	cout<<endl;
	cout<<"1. Cliente";
	cout<<endl;
	cout<<"2. Administrador";
	cout<<endl;
	cout<<"3. Chef";
	cout<<endl;
	cout<<"4. Lavaplatos";
	cout<<endl;
	cout<<"5. Mesero";
	cout<<endl;
	int opcAgregar;
	cout<<"Ingrese la opción: ";
	cout<<endl;
	cin>>opcAgregar;
	switch(opcAgregar){
		case 1:{
			string username;
			cout<<"Ingrese username: ";
			cout<<endl;
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cout<<endl;
			cin>>nombre;
			cout<<"Ingrese password: ";
			cout<<endl;
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cout<<endl;
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cout<<endl;
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cout<<endl;
			cin>>telefono;
			string direccion;
			cout<<"Ingrese direccion: ";
			cout<<endl;
			cin>>direccion;
			int estrellas;
			cout<<"Ingrese estrellas: ";
			cout<<endl;
			cin>>estrellas;
			while (estrellas < 1 || estrellas > 5) {
				cout << "Numero invalido, ingrese su respuesta de nuevo!" << endl;
				cin >> estrellas;
			}
			Cliente temporal(username,nombre,password,edad,id,telefono,direccion,estrellas);
			return temporal;
			break;
		}
		case 2:{
			string username;
			cout<<"Ingrese username: ";
			cout<<endl;
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cout<<endl;
			cin>>nombre;
			cout<<"Ingrese password: ";
			cout<<endl;
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cout<<endl;
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cout<<endl;
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cout<<endl;
			cin>>telefono;
			int contratados;
			cout<<"Ingrese contratados: ";
			cout<<endl;
			cin>>contratados;
			int despedidos;
			cout<<"Ingrese despedidos: ";
			cout<<endl;
			cin>>despedidos;
			int aniocontratado;
			cout<<"Ingrese año en que fue contratado: ";
			cout<<endl;
			cin>>aniocontratado;
			double sueldo;
			cout<<"Ingrese sueldo: ";
			cout<<endl;
			cin>>sueldo;
			Administrador temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,contratados,despedidos);
			return temporal;
			break;
		}
		case 3:{
			string username;
			cout<<"Ingrese username: ";
			cout<<endl;
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cout<<endl;
			cin>>nombre;
			cout<<"Ingrese password: ";
			cout<<endl;
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cout<<endl;
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cout<<endl;
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cout<<endl;
			cin>>telefono;
			string platillofavorito;
			int aniocontratado;
			cout<<"Ingrese año en que fue contratado: ";
			cout<<endl;
			cin>>aniocontratado;
			double sueldo;
			cout<<"Ingrese sueldo: ";
			cout<<endl;
			cin>>sueldo;
			cout<<"Ingrese platillo favorito: ";
			cout<<endl;
			cin>>platillofavorito;
			int rating;
			cout<<"Ingrese rating: ";
			cout<<endl;
			cin>>rating;
			while (rating < 1 || rating > 5) {
				cout << "Numero invalido, ingrese su respuesta de nuevo!" << endl;
				cin >> rating;
			}
			Chef temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,platillofavorito,rating);
			return temporal;
			break;
		}
		case 4:{
			string username;
			cout<<"Ingrese username: ";
			cout<<endl;
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cout<<endl;
			cin>>nombre;
			cout<<"Ingrese password: ";
			cout<<endl;
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cout<<endl;
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cout<<endl;
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cout<<endl;
			cin>>telefono;
			double motivacion;
			int aniocontratado;
			cout<<"Ingrese año en que fue contratado: ";
			cout<<endl;
			cin>>aniocontratado;
			double sueldo;
			cout<<"Ingrese sueldo: ";
			cout<<endl;
			cin>>sueldo;
			cout<<"Ingrese motivacion: ";
			cout<<endl;
			cin>>motivacion;
			Lavaplatos temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo,motivacion);
			return temporal;
			break;
		}
		case 5:{
			string username;
			cout<<"Ingrese username: ";
			cout<<endl;
			cin>>username;
			string password;
			string nombre;
			cout<<"Ingrese nombre: ";
			cout<<endl;
			cin>>nombre;
			cout<<"Ingrese password: ";
			cout<<endl;
			cin>>password;
			int edad;
			cout<<"Ingrese edad: ";
			cout<<endl;
			cin>>edad;
			string id;
			cout<<"Ingrese id: ";
			cout<<endl;
			cin>>id;
			string telefono;
			cout<<"Ingrese telefono: ";
			cout<<endl;
			cin>>telefono;
			int aniocontratado;
			cout<<"Ingrese año en que fue contratado:  ";
			cout<<endl;
			cin>>aniocontratado;
			double sueldo;
			cout<<"Ingrese sueldo: ";
			cout<<endl;
			cin>>sueldo;
			Mesero temporal(username,nombre,password,edad,id,telefono,aniocontratado,sueldo);
			return temporal;
			break;
		}
	}
}

vector<Usuario*> eliminarUsuario(vector<Usuario*> usuarios, int pos){
	int i;
	cout<<"Ingrese la posición del usuario que desea eliminar"<<endl;
	for (int i = 0; i < usuarios.size(); ++i)
	{
		if (i != pos)
		{
			cout << i << ") " << usuarios.at(i) -> getNombre() << endl;
		}
	}
	cin>>i;
	while (i < 0 || i > usuarios.size()) {
		cout << "Numero invalido, ingrese su opcion de nuevo!" << endl;
		cin >> i;
	}
	usuarios.erase(usuarios.begin()+i);
	cout << "Usuario borrado exitosamente!" << endl;
	return usuarios;
}

double aumentarS(double salario) {
	cout << "Ingrese el porcentaje de cambio en la infalcion: " << endl;
	double cambio, aumento, total;
	cin >> cambio;
	cambio = cambio / 100;
	aumento = salario * cambio;
	total = salario + aumento;
	return total;
}

double decrementarS(double salario) {
	cout << "Ingrese el porcentaje de cambio en la infalcion: " << endl;
	double cambio, decremento, total;
	cin >> cambio;
	cambio = cambio / 100;
	decremento = salario * cambio;
	total = salario - decremento;
	return total;
}