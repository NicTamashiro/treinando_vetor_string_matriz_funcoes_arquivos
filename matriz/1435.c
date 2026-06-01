#include <stdio.h>

int main(){

    int n;
    while(scanf("%d", &n) && n != 0){
        int matriz[100][100];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){

                int top = i;
                int bottom = n - 1 - i;
                int left = j;
                int right = n - 1 - j;

                int menor = top;
                if(bottom < menor) menor = bottom;
                if(left < menor) menor = left;
                if(right < menor) menor = right;

                matriz[i][j] = menor + 1;
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j > 0) printf(" ");
                printf("%3d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    } 

    return 0;
}

/*

n = 3

top = 0
bottom = 2
left = 0
right = 2

menor = 0

matriz[0][0] = 1;

----------------------
top = 0
bottom = 2
left = 1
right = 1

menor = 0

matriz[0][1] = 1;

----------------------

top = 0
botton = 2
left = 2
right = 0

menor = 0;

matriz[0][2] = 1;

----------------------

top = 1
bottom = 1
left = 0
right = 2

menor = left

matriz[1][0] = 1;

----------------------

top = 1
bottom = 1
left = 1
right = 1

menor = 1;

matriz[1][1] = 2;

----------------------

top = 1
bottom = 1
left = 2
right = 0

menor = right

matriz[1][2] = 1;

-----------------------

top = 2
bottom = 0
left = 0
right = 2

menor = left

matriz[2][0] = 1

...matriz[2][1] = 1
...matriz[2][2] = 1

*/