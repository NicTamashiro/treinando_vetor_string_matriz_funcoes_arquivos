#include <stdio.h>

void troca(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a,b;
    scanf("%d %d", &a, &b);

    printf("Antes da troca: a = %d e b = %d\n", a, b);
    
    troca(&a, &b);

    printf("Depois da troca: a = %d e b = %d\n", a, b);
    return 0;
}