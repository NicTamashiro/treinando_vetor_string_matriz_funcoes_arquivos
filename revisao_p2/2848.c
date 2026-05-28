#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibe(int * vetor, int tamanho_vetor, int L, int R, int K, unsigned long long G, unsigned long long D){

    int vetor_copia[tamanho_vetor];
    memcpy(vetor_copia, vetor, sizeof(int) * tamanho_vetor);

    for(int i = L - 1; i < R; i++){
        int temp = vetor_copia[i];
        int j = i - 1;

        while(j >= L-1 && vetor_copia[j] > temp){
            vetor_copia[j + 1] = vetor_copia[j];
            j--;
        }
        vetor_copia[j + 1] = temp;
    }

    int repetidos = 0;

    for(int i = L - 1; i < R; i++){
        if (vetor_copia[L-1+K-1] == vetor_copia[i]){
            repetidos++;
        }
    }

    if (abs(G - repetidos) == abs(D - repetidos)){
        printf("%d %d E\n", vetor_copia[L-1+K-1], repetidos);
    } else if(abs(G - repetidos) < abs(D - repetidos)){
        printf("%d %d G\n", vetor_copia[L-1+K-1], repetidos);
    } else {
        printf("%d %d D\n", vetor_copia[L-1+K-1], repetidos);
    }

}

int main(){

    int tamanho_vetor;
    int qtd_rodadas;
    int L, R, K;
    unsigned long long G, D;
    
    // tamanho e quantidade de rodadas
    scanf("%d %d", &tamanho_vetor, &qtd_rodadas);

    int vetor[tamanho_vetor];
    
    // preencher o vetor
    for(int i = 0; i < tamanho_vetor; i++){
        scanf("%d", &vetor[i]);
    }

    // rodadas
    for(int i = 0; i < qtd_rodadas; i++){
        scanf("%d %d %d %llu %llu", &L,&R,&K,&G,&D);

        exibe(vetor, tamanho_vetor, L, R, K, G, D);
    }
    return 0;
}