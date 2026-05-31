#include <stdio.h>

float soma(float matriz[12][12]){
    float soma = 0;

    for(int i = 1; i < 12; i++){
        for(int j = 0; j < i; j++){
            soma += matriz[i][j];
        }
    }

    return soma;
}

float media(float matriz[12][12]){
    float resultado_soma = soma(matriz);

    return resultado_soma / 66;
}

int main(){

    char op;
    scanf(" %c", &op);

    float matriz[12][12];

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    float resultado;

    if(op == 'S'){
        resultado = soma(matriz);
        printf("%.1f\n", resultado);
    } else {
        resultado = media(matriz);
        printf("%.1f\n", resultado);
    }

    return 0;
}