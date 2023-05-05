#pragma once
#include "Figura.h"

using namespace std; 

template<typename T> class Cuadrado {

	float longlado;
public:
	Cuadrado(T longlado_);
	~Cuadrado();
	float area();
	float perimetro();
	string to_string();
	void imprimir();

};