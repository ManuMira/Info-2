#include <stdio.h>
#include <stdlib.h>

int strlen2 (char *str){
        int n = 0;
        while (str[n] != '\0'){
                n++;
        }
        return n;
}

void string_reverse(char *rev){
        int n = strlen2(rev);
        printf("%d\n", n);
        char tmp; 
        for(int i = 1; i <= n/2; i++){
                tmp = rev[n-i];
                rev[n-i] = rev[i-1];
                rev[i-1] = tmp;
        }
}
int main (void){
        char str[1000];
        printf("Escriba una cadena de caracteres: \n");
        scanf("%s", str);
        printf("%d\n", strlen2(str));

        string_reverse(str);
        printf("%s\n", str);


return 0;
}
