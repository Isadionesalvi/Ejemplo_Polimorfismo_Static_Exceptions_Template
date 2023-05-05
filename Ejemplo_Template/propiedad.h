#pragma once
template<typename T> class Propiedad {			//generalizacion de get y seters 
	T variable;
public:
	T get();
	void set(T valor);
};

template<typename T>
inline T Propiedad<T>::get() {
	return this->variable;
}

template<typename T>
inline void Propiedad<T>::set(T valor) {
	this->variable = valor;
}
