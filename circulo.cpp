#include"circulo.hpp"

Circulo::Circulo() {

}

Circulo::Circulo(double radio) {
	diametro = 2 * radio;
	calcCircun();
}

void Circulo::calcCircun() {
	circun = diametro * pi;
}

double Circulo::area() {
	return pi * (radio * radio);
}
