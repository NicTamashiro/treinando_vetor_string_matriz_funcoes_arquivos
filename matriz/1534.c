#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) != EOF){

        int inicio = 0;
        int fim = 1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j == n - fim) printf("2");
                else if(j == inicio) printf("1");
                else printf("3");
            }
            printf("\n");
            inicio++;
            fim++;
        }
    }
    return 0;
}