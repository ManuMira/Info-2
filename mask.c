#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int x = 0;
	
	//Máscara
	short int mask = 15 << 7;
	
	//Qué se enviará?
	printf("Inserte un dato para enviar a 'c'\n");
	scanf("%d", &x);
	
	//Usamos la mask y enviamos a c
	unsigned char c = (x & mask) >> 7;
	
	printf("c recibió: %c", c + 0);

return 0;
}
