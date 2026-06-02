#include <stdio.h>

int main(){

    FILE * fp;

    if((fp = fopen("dados.txt", "r")) == NULL){
        printf("Erro!\n");
        return 0;
    }

    char nomes[100];
    while(fgets(nomes, sizeof(nomes), fp) != NULL){
        printf("%s", nomes);
    }

    printf("\nNomes foram lidos com sucesso!\n");

    return 0;
}