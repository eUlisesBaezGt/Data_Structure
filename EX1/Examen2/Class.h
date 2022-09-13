#pragma once
#include <string>

/*
Empleando C++, construye una aplicación que maneje en un arreglo de registros la información de varios municipios.
Para cada municipio debe almacenar nombre del municipio(alfanumérico), cantidad de habitantes(entero) y nombre del presidente municipal(alfanumérico).

a)    Capturar y registrar la información de cada municipio

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

