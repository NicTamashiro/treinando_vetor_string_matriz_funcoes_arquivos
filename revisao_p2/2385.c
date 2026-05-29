#include <stdio.h>

int main(){

    int dimensoes;
    int pesoLinhaA, pesoColunaA, pesoLinhaB, pesoColunaB, modA, modB;
    int linha_consulta, coluna_consulta;
    scanf("%d", &dimensoes);

    scanf("%d %d %d %d %d %d", &pesoLinhaA, &pesoColunaA, &pesoLinhaB, &pesoColunaB, &modA, &modB);

    scanf("%d %d", &linha_consulta, &coluna_consulta);

    long long resultado = 0;

    for(int i = 1; i <= dimensoes; i++){
        int a = (pesoLinhaA * linha_consulta + pesoColunaA * i) % modA;
        int b = (pesoLinhaB * i + pesoColunaB * coluna_consulta) % modB;

        resultado += (long long)a * b;
    }

    printf("%lld\n", resultado);
    
    return 0;
}