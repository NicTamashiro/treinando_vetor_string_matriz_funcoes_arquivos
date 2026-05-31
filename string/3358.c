#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        char nome[43];
        scanf("%s", nome);

        int consecutivo = 0;
        int dificil = 0;

        for(int j = 0; j < strlen(nome); j++){
            char c = tolower(nome[j]);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                consecutivo = 0;
            } else {
                consecutivo++;
            }

            if(consecutivo >= 3){
                dificil = 1;
                break;
            }
        }

        if(dificil){
            printf("%s nao eh facil\n", nome);
        } else {
            printf("%s eh facil\n", nome);
        }
    }



    return 0;
}