#pragma once

class Circulo {
	private:
	double radio, diametro, circun;
	void calcCircun();
	float pi = 3.14159265359;
	public:
	Circulo(){};
	Circulo(double radio);
	void setRadio(double x){radio = x;};
	void setDiametro(double x) {diametro = x;};
	void setCircun(double x) {circun = x;};
	double getRadio() {return radio;};
	double getDiametro() {return diametro;};
	double getCircun() {return circun;};
	double area();
};
