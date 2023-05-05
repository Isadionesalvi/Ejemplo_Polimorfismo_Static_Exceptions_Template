#pragma once
#define uint unsigned int
using namespace std;

#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

template<typename T> class Figura {

protected:
	const using int cantLados; 
public:
	Figura(unsigned int cantLados);
	~Figura();
	virtua doble area() = 0;
	virtual T perimetro() = 0;
	virtual std::string to_string() = 0;
	virtual void imprimir() = 0;

};


