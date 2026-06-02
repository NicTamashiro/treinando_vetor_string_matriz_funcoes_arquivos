#include <stdio.h>

int dobrar(int * num){
    *num *= 2;
}

int main(){

    int num;
    scanf("%d", &num);

    dobrar(&num);

    printf("Dobrou: %d\n", num);

    return 0;
}