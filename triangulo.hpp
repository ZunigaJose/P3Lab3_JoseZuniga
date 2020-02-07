#pragma once

class Triangulo {
	private:
	double a, b, c, altura;
	double heron();
	
	public:
	Triangulo();
	Triangulo(int a, int b, int c);
	void setA(int x) {a = x;};
	void setB(int x) {b = x;};
	void setC(int x) {c = x;};
	int getA(){return a;};
	int getB(){return b;};
	int getC(){return c;};
	double area();
};
