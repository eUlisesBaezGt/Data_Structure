#pragma once
#include <iostream>
#define SIZE 5
#define USED 3

using namespace std;

/*Construye con C++ una aplicación que almacene en un arreglo la estatura, y solo la estatura, en centímetros de cada uno de los
 miembros de un equipo de futbol.Por ejemplo 167*/

class Team
{
public:
	int heights[SIZE];
	int used = USED;
	Team();

	void insert();
	void show();
};
