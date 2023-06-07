#include <stdio.h>
#include <stdlib.h>

struct est{
int a;
float b;
char c
} s1;
	
	
int main(int argc, char *argv[]){
	printf("%p\n", &s1);
	printf("%p\n", &s1.a);
	printf("%p\n", &s1.b);
	printf("%p\n", &s1.c);

return 0;
}
