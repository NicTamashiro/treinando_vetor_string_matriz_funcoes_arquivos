#include <stdio.h>
#include <string.h>

int main(){

    int times;
    scanf("%d", &times);
    char string[201];
    
    for(int i = 0; i < times; i++){

        scanf("%s", string);

        int qtd_total = 0;
        int qtd_hame = 0;
        int qtd_kame = 0;
        
        for(int j = 0; j < strlen(string); j++){
            if(string[j] == 'a'){
                qtd_total++;
            }
            if(string[j] == 'k'){
                qtd_hame += qtd_total;
                qtd_total = 0;
            }
        }
        qtd_kame = qtd_total;

        printf("k");
        for(int j = 0; j < qtd_hame * qtd_kame; j++){
            printf("a");
        }
        printf("\n");
    }


    return 0;
}