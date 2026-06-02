#include <stdio.h>

void par(int num){
    if(num % 2 == 0){
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }
}

int main(){

    int num;
    scanf("%d", &num);

    par(num);

    return 0;
}