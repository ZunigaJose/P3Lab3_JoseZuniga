#include"triangulo.hpp"
#include<iostream>
#include<math.h>
using namespace std;
Triangulo::Triangulo() {
	
}

Triangulo::Triangulo(double a, double b, double c) {
	setA(a);
	setB(b);
	setC(c);
	double h = heron();
	altura = (2 *h ) / b;
}

double Triangulo::heron() {
	double s, res;
	s = (a + b + c) / 2;
	res = sqrt((s * (s - a) * (s - b) * (s - c)));
	return res;
}

double Triangulo::area() {
	return (b * altura)/2;
}
