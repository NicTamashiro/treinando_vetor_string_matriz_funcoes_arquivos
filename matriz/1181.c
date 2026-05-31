#include <stdio.h>

float soma(float matriz[12][12], int linha){
    float soma = 0;
    for(int i = 0; i < 12; i++){
        soma += matriz[linha][i];
    }

    return soma;
}

float media(float matriz[12][12], int linha){
    int soma_elementos = soma(matriz, linha);

    return soma_elementos / 12;
}

int main(){

    int linha;
    scanf("%d", &linha);

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
        resultado = soma(matriz, linha);
        printf("%.1f\n", resultado);
    } else {
        resultado = media(matriz, linha);
        printf("%.1f\n", resultado);
    }

    return 0;
}