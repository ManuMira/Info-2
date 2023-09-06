#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main (void){
	int fd ; /*File descriptor*/
	char buffer[20];
	int i;
	
	fd = open("/dev/ttyS21", O_RDWR | O_NOCTTY);
	if( fd == -1){
		printf("ERROR: No se pudo abrir mi compa\n");
		return -1;
	}
  	while(1){
	 i = read(fd, buffer, 6); //Timeout
	 printf("Datos enviados pana (%d): %s\n",i, buffer);
	 }
	 close(fd);
	 
	 return 0;
}
