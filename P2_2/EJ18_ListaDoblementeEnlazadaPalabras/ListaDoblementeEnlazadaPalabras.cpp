#include "ListaDoblementeEnlazadaPalabras.h"

ListaDoblementeEnlazadaPalabras::ListaDoblementeEnlazadaPalabras()
{
	primero = nullptr;
	ultimo = nullptr;
	revisado = nullptr;
}

ListaDoblementeEnlazadaPalabras::~ListaDoblementeEnlazadaPalabras() = default;


void ListaDoblementeEnlazadaPalabras::buscado(bool valor)
{
	if (valor)
	{
		cout << "La palabra buscada se encuentra en la lista" << endl;
	}
	else
	{
		cout << "La palabra buscada no se encuentra en la lista" << endl;
	}
}

bool ListaDoblementeEnlazadaPalabras::lista_vacia() const
{
	return primero == nullptr;
}

int ListaDoblementeEnlazadaPalabras::tam() const
{
	if (lista_vacia())
	{
		return 0;
	}
	int count = 1;
	const nodo* temp = primero;
	while (temp != ultimo)
	{
		count++;
		temp = temp->siguiente;
	}
	return count;
}
