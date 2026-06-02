#include <stdio.h>

int main(){

    FILE * fp;

    if((fp = fopen("dados.txt", "w")) == NULL){
        printf("Erro!\n");
        return 1;
    }

    char nomes[5][21];
    printf("Escreva cinco nomes: \n");
    for(int i = 0; i < 5; i++){
        scanf(" %20[^\n]", nomes[i]);
    }

    for(int i = 0; i < 5; i++){
        fprintf(fp, "Nome [%d]: %s\n", i, nomes[i]);
    }

    fclose(fp);

    printf("Nomes cadastrados com sucesso!\n");

    return 0;
}