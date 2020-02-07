#pragma once
#include"triangulo.hpp"
class Piramide {
	private:
	Triangulo triangle;
	double altura;

	public:
	Piramide();
	Piramide(Triangulo tri, double alt);
	void setTriangulo(Triangulo tri){triangle = tri;};
	void setAltura(double alt) {altura = alt;};
	double getAltura() {return altura;};
	Triangulo getTriangulo(){return triangle;};
	double vol();
};
