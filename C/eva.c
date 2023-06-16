#include <stdio.h>
#include <stdlib.h>



int main (void){
	int n = 0;
	
	do{
		printf("Cuantos nùmeros tendrá el arreglo\n");
		scanf("%d", &n);
	}while(n == 0);
	
	int  *t = malloc(n*sizeof(int));
	
	for(int i = 0; i < n; i++){
		printf("Ingrese el número %d: ", i+1);
		scanf("%d", &t[i]);
	}
	
	printf("Los elementos pares son: \n");
	
	for(int i = 0; i < n; i++){
		if((t[i] % 2) == 0){
			printf("%d\n", t[i]);
		}
	}
free(t);
return 0;
}
