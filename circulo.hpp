#pragma once

class Circulo {
	private:
	double radio, diametro, circun;
	int calcCircun();
	
	public:
	Circulo();
	Circulo(double radio);
	void setRadio(int x){radio = x;};
	void setDiametro(int x) {diametro = x;};
	void setCircun(int x) {circun = x;};
	double getRadio() {return radio;};
	double getDiametro() {return diametro;};
	double getCircun() {return circun;};
	double area();
};
