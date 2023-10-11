#ifndef MOT_H
#define MOT_H

class motor{
	private:
	int Velocidad_Actual;
	int Velocidad_Objetivo;
	
	public:
	motor(int Velocidad_Objetivo);
	void set_Va(int Va);
	int get_Va()const;
	void set_Vo(int Vo);
	int get_Vo()const;
	void Incrementar();
	void Decrementar();
}
#endif
