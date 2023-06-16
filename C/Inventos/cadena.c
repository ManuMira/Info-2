#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
        int n = 1;
        char *str = {0};

        str = (char *)malloc(n * sizeof(int));

        printf("Inserte su cadena de arreglos: ");

        scanf("\n%[^\n]", str);
        printf("%s\n", str);

free(str);

return 0;
}

//Pide al operador una cadena y la imprime.
