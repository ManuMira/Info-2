#include <stdio.h>
#include <stdlib.h>

struct campo{
char :1;
char a:2;
char :7;
char b:4;
char :0;
int c:10;
} c1;

int main(int argc, char *argv){
	
}

/*
Crear el campo con la siguiente estructura:

|----/a/-|
|-/ b /--|
|/   c  /|
|-/  c/--|

*/
