#include <stdio.h>
#include <string.h>

int main(){
    char s[20];
    while (fgets(s, sizeof(s), stdin)){

        s[strcspn(s, "\n")] = 0;
        
        if (strcmp(s, "esquerda") == 0){
            printf("ingles\n");
        } else if (strcmp(s, "direita") == 0){
            printf("frances\n");
        } else if (strcmp(s, "nenhuma") == 0){
            printf("portugues\n");
        } else
            printf("caiu\n");
    }
}
