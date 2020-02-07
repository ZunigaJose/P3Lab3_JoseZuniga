#pragma once

class Triangulo {
	private:
	double a, b, c, altura;
	double heron();
	
	public:
	Triangulo();
	Triangulo(double a, double b, double c);
	void setA(int x) {a = x;};
	void setB(int x) {b = x;};
	void setC(int x) {c = x;};
	double getA(){return a;};
	double getB(){return b;};
	double getC(){return c;};
	double area();
};
