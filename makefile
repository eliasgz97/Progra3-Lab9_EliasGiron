run: Main.o Persona.o Cliente.o Repartidor.o Empleado.o Negocio.o Producto.o Ordenes.o 
	g++ Main.o Persona.o Cliente.o Repartidor.o Empleado.o Negocio.o Producto.o Ordenes.o -o run
Main.o: Main.cpp Persona.h Cliente.h Repartidor.h Empleado.h Negocio.h Producto.h Ordenes.h 
	g++ -c Main.cpp
Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
Cliente.o: Cliente.h Cliente.cpp
	g++ -c Cliente.cpp
Repartidor.o: Repartidor.h Repartidor.cpp
	g++ -c Repartidor.cpp
Empleado.o: Empleado.h Empleado.cpp
	g++ -c Empleado.cpp
Negocio.o: Negocio.h Negocio.cpp
	g++ -c Negocio.cpp
Producto.o: Producto.h Producto.cpp
	g++ -c Producto.cpp
Ordenes.o: Ordenes.h Ordenes.cpp
	g++ -c Ordenes.cpp
