#include <stdio.h>

int main(){

    int par[5];
    int impar[5];
    int num;
    int qtd_par = 0;
    int qtd_impar = 0;

    for(int i = 0; i < 15; i++){
        scanf("%d", &num);

        if(num % 2 == 0){
            par[qtd_par] = num;
            qtd_par++;

            if(qtd_par == 5){
                for(int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_par = 0;
            }

        } else {
            impar[qtd_impar] = num;
            qtd_impar++;
             
            if(qtd_impar == 5){
                for(int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_impar = 0;
            }
        }
    }

    for(int i = 0; i < qtd_impar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    
    for(int i = 0; i < qtd_par; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}

/*

impar[0] = 1;
impar[1] = 3;
par[0] = 4;
par[1] = -4;
par[2] = 2;
impar[2] = 3;
par[3] = 8;
par[4] = 2;

print(par);
qtd_par = 0;

impar[3] = 5
impar[4] = -7;

print(impar);
qtd_impar = 0;

par[0] = 54;
par[1] = 75;
impar[0] = 789;
impar[1] = 23;
par[2] = 98;

*/