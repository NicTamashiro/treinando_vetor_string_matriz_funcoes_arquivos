#include <stdio.h>

void quadrado(int num){
    printf("O quadrado do numero eh: %d\n", num*num);
}

int main(){

    int num;
    scanf("%d", &num);

    quadrado(num);

    return 0;
}