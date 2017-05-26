prueba: prueba.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplatos.o Mesero.o
	g++ prueba.o Usuario.o Cliente.o Personal.o Administrador.o Chef.o Lavaplatos.o Mesero.o -o prueba

prueba.o: prueba.cpp Usuario.h Cliente.h Personal.h Administrador.h Chef.h Lavaplatos.h Mesero.h
	g++ -c prueba.cpp

Usuario.o: Usuario.cpp Usuario.cpp
	g++ -c Usuario.cpp

Cliente.o: Cliente.h Cliente.cpp Usuario.h
	g++ -c Cliente.cpp

Personal.o: Personal.h Personal.cpp Usuario.h
	g++ -c Personal.cpp

Administrador.o: Administrador.cpp Administrador.h Usuario.h Personal.h
	g++ -c Administrador.cpp

Chef.o: Chef.cpp Chef.h Usuario.h Personal.h
	g++ -c Chef.cpp

Lavaplatos.o: Lavaplatos.cpp Lavaplatos.h Usuario.h Personal.h
	g++ -c Lavaplatos.cpp

Mesero.o: Mesero.cpp Mesero.h Usuario.h Personal.h
	g++ -c Mesero.cpp

clean:
	rm -f *.o prueba