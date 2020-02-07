#include"esfera.hpp"
#include <math.h>
Esfera::Esfera() {
	
}

Esfera::Esfera(Circulo cir) {
	circle = cir;
}

double Esfera::vol() {
	return (3.14159 * pow(circle.getRadio(), 3) * 4 / 3);
}
