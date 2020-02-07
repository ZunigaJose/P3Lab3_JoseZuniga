#include"triangulo.hpp"
#include<iostream>
#include<math.h>

Triangulo::Triangulo() {
	
}

Triangulo::Triangulo(int a, int b, int c) {
	setA(a);
	setB(b);
	setC(c);
	altura = (2 * heron()) / b;
}

double Triangulo::heron() {
	int s, res;
	s = (a + b + c) / 2;
	res = sqrt((s * (s - a) * (s - b) * (s - c)));
	return res;
}

double Triangulo::area() {
	return (b * altura)/2;
}
