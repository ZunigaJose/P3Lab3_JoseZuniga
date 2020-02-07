#pragma once
#include"triangulo.hpp"
class Piramide {
	private:
	Triangulo triangle;
	double altura;

	public:
	void setTriangulo(Triangulo tri){triangle = tri;};
	void setAltura(int alt) {altura = alt;};
	double getAltura() {return altura;};
	Triangulo getTriangulo(){return triangle;};
	double vol();
};
