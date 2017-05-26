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

int main() {
	vector<Usuario*> usuarios;
	bool seguir = true;
	cout << "Bienvenido al Restaurante: - Como vos Querras! -." << endl;

	while (seguir == true) {
		int resp1 = menu();

		if (resp1 == 1)
		{
			boolean user = false, pass = false, enter = false, enter2 = false;
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
						i = usuarios.size();
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
						if (resp2 == 1)
						{
							cout << "Ingrese el rating del 1 - 5 que desea darle al restaurante: " << endl;
							int rating;
							cin >> rating;
							while (rating < 0 || rating > 5) {
								cout << "Rating invalido, ingrese su rating de nuevo." << endl;
								cin >> rating;
							}

						} else {
							seguir2 = false;
						}
					} else if (dynamic_cast<Personal*>(usuarios.at(userM)))
					{
						if (dynamic_cast<Administrador*>(usuarios.at(userM)))
						{
							Administrador* temp2 = dynamic_cast<Administrador*>(usuarios.at(userM));

						} else if (dynamic_cast<Chef*>(usuarios.at(userM)))
						{
							Chef* temp3 = dynamic_cast<Chef*>(usuarios.at(userM));

						} else if (dynamic_cast<Lavaplatos*>(usuarios.at(userM)))
						{
							Lavaplatos* temp4 = dynamic_cast<Lavaplatos*>(usuarios.at(userM));

						} else if (dynamic_cast<Meseros*>(usuarios.at(userM)))
						{
							Meseros* temp5 = dynamic_cast<Meseros*>(usuarios.at(userM));
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