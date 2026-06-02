#include <stdio.h>

int maior(int a, int b){
    if(a > b) return a;
    else return b;
}

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int resultado = maior(a,b);

    printf("Eh o maior: %d\n", resultado);

    return 0;
}