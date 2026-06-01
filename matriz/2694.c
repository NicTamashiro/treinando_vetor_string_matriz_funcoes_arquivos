#include <stdio.h>
#include <string.h>

int main(){

    int vezes;
    scanf("%d", &vezes);

    for(int i = 0; i < vezes; i++){

        char string[15];
        scanf(" %14[^\n]", string);

        int soma = 0;
        int num = 0;
        int lendo_num = 0;

        for(int j = 0; j < strlen(string); j++){
            if(string[j] >= '0' && string[j] <= '9'){
                num = num * 10 + (string[j] - '0');
                lendo_num = 1;
            } else {
                if(lendo_num){
                    soma += num;
                    num = 0;
                    lendo_num = 0;
                }
            }
        }
        if(lendo_num){
            soma += num;
        }
        printf("%d\n", soma);
    }

    return 0;
}