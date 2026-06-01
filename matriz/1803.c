#include <stdio.h>
#include <string.h>

int main(){

    char linhas[4][100];

    while(scanf("%s%s%s%s", linhas[0], linhas[1], linhas[2], linhas[3]) == 4){
        int num_colunas = strlen(linhas[0]);

        long long colunas[100];
        for(int i = 0; i < num_colunas; i++){
            colunas[i] = ((linhas[0][i]-'0') * 1000) + ((linhas[1][i]-'0') * 100) + ((linhas[2][i]-'0') * 10) + ((linhas[3][i]-'0'));
        }

        long long F = colunas[0];
        long long L = colunas[num_colunas - 1];

        for(int i = 1; i < num_colunas - 1; i++){
            int c = (F * colunas[i] + L) % 257;
            printf("%c", c);
        }
        printf("\n");
    }

    return 0;
}