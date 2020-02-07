#include<iostream>
#include "triangulo.hpp"
using namespace std;

int triangu(int n) {
	int nTriangular = 0;
	for(int i = 1; i < n; i++) {
		if(nTriangular + i > n){
			break;
		} else {
			nTriangular += i;
		}
	}
	return nTriangular;
}

int ingresoVals(char c) {
	int x;
	cout << "Ingrese el valor de " << c << ": ";
	cin >> x;
	while(x <= 0) {
		cout << "\aValor Invalido!!\nIntente de nuevo: ";
		cin >> x;
	} return x;
}

int menu() {
	int op;
	cout << "Lab 3 - Jose Zuniga -" << endl;
	cout << "0. Salir\n1. Identificar numero triangular previo\n";
	cout << "2. Calcular area de triangulo\n3. Calcular area de circulo\n";
	cout << "4. Calcular volumen de piramide\n5. Calcular volumen de esfera: ";
	cin >> op;
	if(op < 0 || op > 4) return menu();
	return op;
}

int main() {
	int usoVario, a, b, c;
	int op;
	cout << "--- Valores de Triangulo---" << endl;
        a = ingresoVals('a');
        b = ingresoVals('b');//Dijo Manrique este seria la altura siempre!
        c = ingresoVals('c');
        Triangulo triangle(a,b,c);
	cout << "---Valores de Circulo---" << endl; 
	do {
		op = menu();
		switch (op) {
			case 1:
				cout << "Ingrese el un numero m: ";
				cin >> usoVario;
				cout << "numero triangular: " << triangu(usoVario) << endl << endl;
			break;
			case 2:
				cout << "Area de Triangulo: " << triangle.area() << endl;

			break;
		}
	} while (op);
	return 0;
}
