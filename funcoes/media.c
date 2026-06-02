#include <stdio.h>

float media(float a, float b, float c){
    return (a+b+c) / 3;
}

int main(){

    float nota1, nota2, nota3;
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    float resultado = media(nota1,nota2,nota3);

    printf("%.2f\n", resultado);

    return 0;
}