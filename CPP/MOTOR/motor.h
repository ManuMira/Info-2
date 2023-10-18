#ifndef MOT_H		//Definir una sola vez
#define MOT_H

class motor{
	private:		//Atributos
	int Velocidad_Actual;	//int por ser entero 
	int Velocidad_Objetivo;	//int por ser entero
	
	public:			//Metodos
	motor(int Velocidad_Objetivo);	//Constructor ordinario
	void set_Va(int Va);		//void por ser un setter
	int get_Va();			//int por sevolver un entero positivo
	void set_Vo(int Vo);		//void por ser un setter
	int get_Vo();			//int por sevolver un entero positivo
	void Incrementar();		//void por ser un setter
	void Decrementar();		//void por ser un setter
}
#endif
