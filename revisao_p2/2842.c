#include <stdio.h>
#include <string.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    char stringA[1001];
    char stringB[1001];

    scanf(" %s", stringA);
    scanf(" %s", stringB);

    int n = strlen(stringA);
    int m = strlen(stringB);

    int char_comum[1001][1001];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(i == 0 || j == 0){
                char_comum[i][j] = 0;
            } else if(stringA[i-1] == stringB[j-1]){
                char_comum[i][j] = char_comum[i-1][j-1] + 1;
            } else {
                char_comum[i][j] = max(char_comum[i-1][j], char_comum[i][j-1]);
            }
        }
    }

    int lcs = char_comum[n][m];
    printf("%d\n", n + m - lcs);

    return 0;
}