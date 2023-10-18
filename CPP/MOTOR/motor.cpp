#include "motor.h"
#include <iostream>

using namespace std;

using std::cout;
using std::cin;

motor::motor(int Vo){
	if(Vo > 0){
		Velocidad_Actual = 0;
		Velocidad_Objetivo = Vo;
	}else{
		cout << "Solo se pueden asignar enteros positivos"
	}
}

void motor::set_Va(int Va){
	if(Va > 0){
		Velocidad_Actual = Va;
	}
}

int motor::get_Va(){
	return Velocidad_Actual;
}
void motor::set_Vo(int Vo){
	if(Vo > 0){
		Velocidad_Objetivo = Vo;
	}
}

int motor::get_Vo(){
	return Velocidad_Objetivo;
}

void motor::Incrementar(){
	Velocidad_Actual++;
}

void motor::Decrementar(){
	Velocidad_Objetivo--;
}
