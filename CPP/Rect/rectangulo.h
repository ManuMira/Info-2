#ifndef RECT_H
#define RECT_H
class rectangulo{
	private:
	float base;
	float altura;
	
	public:
	rectangulo();
	float area(){return base * altura};
	bool cuad();
	float perim(){return (2 * base) + (2 * altura)};
	void mostrar();
	void setArea();
	void serPerim();
	
}
#endif
