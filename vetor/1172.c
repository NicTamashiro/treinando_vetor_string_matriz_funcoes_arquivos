#include <stdio.h>

void ler_vetor(int * arr){
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }
}

void exibir_vetor(int * arr){
    for(int i = 0; i < 10; i++){
        if(arr[i] <= 0){
            printf("X[%d] = %d\n", i, 1);
        } else {
            printf("X[%d] = %d\n", i, arr[i]);
        }
    }
}

int main(){

    int arr[10];

    ler_vetor(arr);

    exibir_vetor(arr);

    return 0;
}