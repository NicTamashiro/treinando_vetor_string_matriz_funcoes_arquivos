#include <stdio.h>

int main(){

    FILE * fp;

    if((fp = fopen("dados.txt", "w")) == NULL){
        printf("Erro!\n");
        return 1;
    }

    fprintf(fp, "Nicolas Tamashiro\n");
    fprintf(fp, "18 anos\n");
    fprintf(fp, "1.72 m\n");

    fclose(fp);

    return 0;
}