#include"piramide.hpp"

Piramide::Piramide() {

}

Piramide::Piramide(Triangulo tri, double alt) {
	triangle = tri;
	altura = alt;
}

double Piramide::vol() {
	return (triangle.getB() * altura) / 3;
}
