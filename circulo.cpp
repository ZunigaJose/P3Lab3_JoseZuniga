#include"circulo.hpp"
#include<iostream>
using namespace std;

//Circulo::Circulo() {

//}

Circulo::Circulo(double rad) {
	radio = rad;
	diametro = 2 * radio;
	void calcCircun();
}

void Circulo::calcCircun() {
	circun = diametro * pi;
}

double Circulo::area() {
	cout << "radio: " << radio << endl;
	cout << "pi: " << pi << endl;
	return pi * (radio * radio);
}
