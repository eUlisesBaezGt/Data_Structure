#pragma once
#include <string>
#include <iostream>

using namespace std;

class ListaDoblementeEnlazadaPalabras
{
public:
	ListaDoblementeEnlazadaPalabras();
	~ListaDoblementeEnlazadaPalabras();

	void insertar_palabra(const string&, const string&);
	void imprimir_lista() const;
	void borrar_palabra(const string&);

	bool buscar_palabra(const string&);
	static void buscado(bool);

	bool lista_vacia() const;
	int tam() const;

private:
	struct nodo
	{
		string palabra{};
		nodo* siguiente{};
		nodo* anterior{};
	};

	nodo *primero, *ultimo, *revisado;
};
