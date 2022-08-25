#pragma once
#include <string>

/*
Empleando C++, construye una aplicaci�n que maneje en un arreglo de registros la informaci�n de varios municipios.
Para cada municipio debe almacenar nombre del municipio(alfanum�rico), cantidad de habitantes(entero) y nombre del presidente municipal(alfanum�rico).

a)    Capturar y registrar la informaci�n de cada municipio

b)    Mostrar todos los registros de los municipios*/

struct Municipio
{
	std::string name;
	int population;
	std::string president;
};

class Class
{
public:
	Municipio municipios [3];

	void Register();
	void show();
};

