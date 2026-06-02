#include <stdio.h>

void preencher(int * arr, int primeiro_valor){
    arr[0] = primeiro_valor;
    for(int i = 1; i < 10; i++){
        arr[i] = arr[i - 1] * 2;
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