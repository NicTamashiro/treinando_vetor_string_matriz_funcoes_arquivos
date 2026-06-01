#include <stdio.h>
#include <string.h>

int main(){

    int vezes;
    scanf("%d", &vezes);
    char string[21], nova_palavra[21];

    for(int i = 0; i < vezes; i++){
        scanf(" %20[^\n]", string);

        int qtd_palavra = 0;

        for(int j = 0; j < strlen(string); j++){
            if(string[j] >= 'a' && string[j] <= 'z'){
                nova_palavra[qtd_palavra] = string[j];
                qtd_palavra++;
            }
        }

        nova_palavra[qtd_palavra] = '\0';

        for(int j = strlen(nova_palavra) - 1; j >= 0; j--){
            printf("%c", nova_palavra[j]);
        }
        printf("\n");
    }   

    return 0;
}