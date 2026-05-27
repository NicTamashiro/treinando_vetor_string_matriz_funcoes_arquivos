#include <stdio.h>

void preencher(int * arr, int primeiro_valor){
    arr[0] = primeiro_valor;
    for(int i = 1; i < 10; i++){
        arr[i] = primeiro_valor*2;
        primeiro_valor = arr[i];
    }
}

void exibir(int * arr){
    for(int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }
}

int main(){

    int arr[10];
    int primeiro_valor;

    scanf("%d", &primeiro_valor);

    preencher(arr, primeiro_valor);

    exibir(arr);

    return 0;
}