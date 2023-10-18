#include "rectangulo.h"
#include <iostream>

using namespace std;

using std::cout;
using std::cin;

rectangulo::rectangulo(){
	base = 0;
	altura = 0;
}

rectangulo::rectangulo(int a, int b){
	if(a >= 0 && b >= 0){
		base = a;
		altura = b;
	}
	cout << "Solo se pueden ingresar numeros Naturales";
}

bool rectangulo::cuad(){
	if(altura == base)
		return true
	return false
}

void rectangulo::mostrar(){
	cout << "Rectangulo: " << base << "; " << altura;
}
