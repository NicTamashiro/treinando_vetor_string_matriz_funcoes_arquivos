#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    int arr[1000];
    for(int i = 0; i < 1000; i++){
        arr[i] = i % num;
    }

    for(int i = 0; i< 1000; i++){
        printf("N[%d] = %d\n", i, arr[i]);
    }

    return 0;
}