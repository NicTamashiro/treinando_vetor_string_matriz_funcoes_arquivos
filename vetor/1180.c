#include <stdio.h>

int main(){

    int valor;
    scanf("%d", &valor);
    int arr[valor];

    for(int i = 0; i < valor; i++){
        scanf("%d", &arr[i]);
    }

    int menor = arr[0];
    int posicao;

    for(int i = 1; i < valor; i++){
        if(arr[i] < menor){
            menor = arr[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}