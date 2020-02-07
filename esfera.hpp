#pragma once
#include"circulo.hpp"

class Esfera {
	private: 
	Circulo circle;
//	float const pi = 3.14159265359;
	public:
	Esfera();
        Esfera(Circulo);
        void setCirculo(Circulo circ) {circle = circ;};
        Circulo getCirculo(){return circle;};
        double vol();

};
