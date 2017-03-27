Examen:	main.o Circulo.o Cuadrado.o Figura.o Double.o
		g++ main.o Circulo.o Cuadrado.o Figura.o Double.o -o Examen

main.o:	main.cpp Circulo.h Cuadrado.h Figura.h Double.h
		g++ -c main.cpp

Circulo.o:	Circulo.cpp Circulo.h Figura.h
		g++ -c Circulo.cpp

Cuadrado.o:	Cuadrado.cpp Cuadrado.h Figura.h
		g++ -c Cuadrado.cpp

Figura.o:	Figura.cpp Figura.h Cuadrado.h Circulo.h
		g++ -c Figura.cpp

Double.o: Double.cpp Double.h
		g++ -c Double.cpp
