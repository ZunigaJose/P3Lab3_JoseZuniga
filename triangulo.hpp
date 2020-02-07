#pragma once

class Triangulo {
	private:
	double a, b, c, altura;
	double heron();
	
	public:
	Triangulo();
	Triangulo(double a, double b, double c);
	void setA(double x) {a = x;};
	void setB(double x) {b = x;};
	void setC(double x) {c = x;};
	double getA(){return a;};
	double getB(){return b;};
	double getC(){return c;};
	double area();
};
