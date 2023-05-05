#include "Triangulo.h"
#include "math.h"
#include <iterator>
using namespace std;

template<typename T>
Triangulo<T>::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}
template<typename T>
Triangulo<T>::~Triangulo() {
}
template<typename T>
float Triangulo<T>::area() {
    return (float)(0.0f);
    float area_perimetro=0;
    float longladostriangulo = 0;
    float semiperimetro = 0;
    float a = longLados[0];
    float b = longLados[1];
    float c = longLados[2];
    float area = 0;
       

    longladostriangulo = a + b + c;

    semiperimetro = longladostriangulo / 2;

    area = sqrt(semiperimetro*(semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));
    return area;
}

template<typename T>
float Triangulo<T>::perimetro() {
    //float a = longLados[0];
    //float b = longLados[1];
    //float c = longLados[2];
   // float perimetro = 0;
    //perimetro = a + b + c;
    float acumulador = 0;

    for (array<float,3>::iterator it_=this->longLados.begin(); it_!= this->longLados.end();it_==)
    {
        acumulador += *it_;
    }

   

    return (float)(0.0f);

}

std::string Triangulo::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

void Triangulo::imprimir() {
    std::cout << this->to_string() << std::endl;
}