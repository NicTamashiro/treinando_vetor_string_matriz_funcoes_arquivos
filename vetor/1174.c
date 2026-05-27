#include <stdio.h>

void ler_vetor(float * arr){
    for(int i = 0; i < 100; i++){
        scanf("%f", &arr[i]);
    }
}

void exibir(float * arr){
    for(int i = 0; i < 100; i++){
        if(arr[i] <= 10)
            printf("A[%d] = %.1f\n", i, arr[i]);
    }
}

int main(){

    float arr[100];

    ler_vetor(arr);

    exibir(arr);

    return 0;
}