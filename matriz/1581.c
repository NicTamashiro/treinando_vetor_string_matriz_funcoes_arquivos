#include <stdio.h>
#include <string.h>

int main(){

    int casos;
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
        int pessoas;
        scanf("%d", &pessoas);

        char idioma[pessoas][21];

        for(int j = 0; j < pessoas; j++){
            scanf(" %20[^\n]", idioma[j]);;
        }

        int ingles = 0;
        
        for(int j = 1; j < pessoas; j++){
            if(strcmp(idioma[j], idioma[j-1]) == 0) continue;
            else {
                ingles = 1;
                break;
            }
        }

        if(ingles) printf("ingles\n");
        else printf("%s\n", idioma[0]);
    }

    return 0;
}