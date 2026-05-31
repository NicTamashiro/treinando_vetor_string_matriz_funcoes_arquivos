#include <stdio.h>

float soma(float matriz[12][12], int coluna){
    float soma = 0;

    for(int i = 0; i < 12; i++){
        soma += matriz[i][coluna];
    }

    return soma;
}

float media(float matriz[12][12], int coluna){
    float resultado_soma = soma(matriz, coluna);

    return resultado_soma / 12;
}

int main(){

    int coluna;
    scanf("%d", &coluna);

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
        resultado = soma(matriz, coluna);
        printf("%.1f\n", resultado);
    } else {
        resultado = media(matriz, coluna);
        printf("%.1f\n", resultado);
    }

    return 0;
}