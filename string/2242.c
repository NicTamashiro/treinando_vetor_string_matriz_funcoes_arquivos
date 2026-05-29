#include <stdio.h>
#include <string.h>

int main(){

    char risada[51];
    char vogais[51];
    int qtd_vogais = 0;
    scanf("%s", risada);

    for(int i = 0; i < strlen(risada); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[qtd_vogais] = risada[i]; 
            qtd_vogais++;
        }
    }

    int inicio = 0;
    int fim = qtd_vogais - 1;
    int palindromo = 1;

    while(inicio < fim){
        if(vogais[inicio] != vogais[fim]){
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if(palindromo){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}