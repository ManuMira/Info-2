#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct alumno{
	char nombre[20];
	int nota;
};


void main()
{
      struct alumno x[20];
      int i,n=0;
      
      system("clear");
      
      //Pedir cadenas
      printf("Ingrese nro de cadenas: ");
      scanf("%d",&n);
      printf("\n");
     
	for(i = 0; i < n; i++)
	{
		//Pedir nombre
		printf("Ingrese el nombre del alumno %d : ", i+1);
		x[i].nombre = (char *)malloc(20*sizeof(char));
		scanf("%s", x[i].nombre);
		//Pedir nota
		printf("Ingrese la nota del alumno %d : ", i+1);
		scanf("%s", x[i].nota);
	}
	//Ordenar lista
	reorder(n,&x.nombre);
	printf("\nLista ordenada:  \n");
	for(i = 0; i < n; i++)
   {
	  printf("%d %s\n", i+1, x[i]);
   }
			  
}
void reorder2(int n,char *x[])
{
	int i, j;
	char t[20];
	for(i = 0; i < n-1; i++)
	for(j = i+1; j < n; j++)
		if(strcmp(x[i].nombre, x[j].nombre) > 0)
		  {
			strcpy(t,x[j].nombre);
			strcpy(x[j].nombre,x[i].nombre);
			strcpy(x[i].nombre,t);
		  }
	return;
}

void reorder(int n,char *x[])
{
	int i,j;
	char *t;
	for(i = 0; i < n-1; i++)
	for(j = i+1; j < n; j++)
		if(strcmp(x[i].nombre, x[j].nombre) > 0)
		  {
			t = x[j].nombre;
			x[j].nombre = x[i].nombre;
			x[i].nombre = t;
		  }
	return;
}
