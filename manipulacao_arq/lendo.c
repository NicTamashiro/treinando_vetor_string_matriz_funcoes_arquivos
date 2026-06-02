#include <stdio.h>

int main(){

    FILE * fp;

    if((fp = fopen("dados.txt", "r")) == NULL){
        printf("Erro!\n");
        return 1;
    }

    char linha[100];
    while(fgets(linha, sizeof(linha), fp) != NULL){
        printf("%s", linha);
    }

    fclose(fp);

    return 0;
}