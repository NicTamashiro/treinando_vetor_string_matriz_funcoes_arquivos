#include <stdio.h>

int main(){

    int num;
    
    while(scanf("%d", &num) != EOF){
        int inicio = 0;
        int fim = 1;
        for(int i = 0; i < num; i++){
            for(int j = 0; j < num; j++){
                if (j == num - fim) printf("2");
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