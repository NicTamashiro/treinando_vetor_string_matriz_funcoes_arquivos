#include <stdio.h>

void ler_vetor(int * arr){
    for(int i = 0; i < 20; i++){
        scanf("%d", &arr[i]);
    }
}

void trocar_vetor(int * arr){
    for(int i = 0; i < 10; i++){
        int temp = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = temp;
    }
}

void exibir(int * arr){
    for(int i = 0; i < 20; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }
}

int main(){

    int arr[20];

    ler_vetor(arr);

    trocar_vetor(arr);

    exibir(arr);

    return 0;
}