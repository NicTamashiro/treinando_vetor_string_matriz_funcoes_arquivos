#include <stdio.h>

void armazenar(double * arr, double num){
    arr[0] = num;

    for (int i = 1; i < 100; i++){
        arr[i] = arr[i - 1] / 2;
    }
}

void exibir(double * arr){
    for (int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n", i, arr[i]);
    }
}

int main(){

    double arr[100];
    double num;
    scanf("%lf", &num);

    armazenar(arr,num);

    exibir(arr);

    return 0;
}