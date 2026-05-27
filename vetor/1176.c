#include <stdio.h>

void calcular_fibonacci(unsigned long long * fib){
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= 60; i++){
        fib[i] = fib[i-2] + fib[i-1]; 
    }
}

void ler_exibir(unsigned long long * fib, int casos){
    for(int i = 0; i < casos; i++){
        int num;
        scanf("%d", &num);
        printf("Fib(%d) = %llu\n", num, fib[num]);
    }
}

int main(){

    unsigned long long fib[61];
    calcular_fibonacci(fib);

    int casos;
    scanf("%d", &casos);

    ler_exibir(fib, casos);

    return 0;
}