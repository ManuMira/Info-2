#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main (void){
	int fd ; /*File descriptor*/
	char buffer[20];
	int i;
	
	fd = open("/dev/ttyS20", O_WRONLY);
	if( fd == -1){
		printf("ERROR: No se pudo abrir mi compa\n");
		return -1;
	}
	while(1){
	 int n = write(fd, "Hola!", 6);
	 printf("Datos enviados pana: %d\n",n);
	 }
	 close(fd);
	 
	 return 0;
}
