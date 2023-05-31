#include <stdio.h>
#include <stdlib.h>

void converter(float a, char* c);

int main (void){
	float f = 0;
	char c[6];
	
	printf("Inserte un número con 2 cifras y 2 decimales: ");
	scanf("%f", &f);
	
	converter(f, c);
	
	printf("La conversión es: %s\n", c);
	
return 0;
}

void converter(float f, char* c){
	int a = 0;
	
	a = (int)f / 10;
	
	if ((a >= 0) && (a <= 9)){
		c[0] = a + '0';
	}
	
	a = ((int)f % 10) + '0';
	c[1] = a;
	
	c[2] = ',';
	
	int m = (int)f;
	int j = (int)(f - m) * 10;
	float i = (float)((f - m) - (float)(j / 10))*100; 
	a = j + '0';	c[3] = a;
	
	a = i + '0';
	c[4] = a;
	
	c[5] = '\0';
}
