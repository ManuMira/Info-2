#include <stdio.h>
#include <stdlib.h>
union serial{
float f;
char v[4];
} u1;

int main(int argc, char *argv){
	u1.f = 3.14;
	for(int i = 0; i < 4; i++){
		printf("%c\n", u1.v[i] + 0);
	}
}
