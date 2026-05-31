#include <stdio.h>
#include <string.h>

int main(){

    char frase1[101];
    char frase2[101];
    char frase3[101];

    scanf(" %100[^\n]", frase1);
    scanf(" %100[^\n]", frase2);
    scanf(" %100[^\n]", frase3);

    printf("%s%s%s\n", frase1,frase2,frase3);
    printf("%s%s%s\n", frase2, frase3, frase1);
    printf("%s%s%s\n", frase3, frase1, frase2);
    printf("%.10s%.10s%.10s\n", frase1, frase2, frase3);

    return 0;
}