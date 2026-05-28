#include <stdio.h>

#define MAX 1005

int a[MAX][MAX];
int h[MAX];
int st[MAX];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {

    int L, C;
    scanf("%d %d", &L, &C);

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Se não existir submatriz >= 2x2
    int ans = 0;

    // histograma das células válidas
    for (int i = 0; i < L - 1; i++) {

        for (int j = 0; j < C - 1; j++) {

            if (a[i][j] + a[i + 1][j + 1]
                <=
                a[i][j + 1] + a[i + 1][j]) {

                h[j]++;

            } else {
                h[j] = 0;
            }
        }

        // maior retângulo no histograma
        int top = -1;

        for (int j = 0; j <= C - 1; j++) {

            int cur = (j == C - 1 ? 0 : h[j]);

            while (top >= 0 && h[st[top]] >= cur) {

                int altura = h[st[top--]];
                int largura;

                if (top < 0)
                    largura = j;
                else
                    largura = j - st[top] - 1;

                // +1 porque células viram dimensões reais
                int area = (altura + 1) * (largura + 1);

                ans = max(ans, area);
            }

            st[++top] = j;
        }
    }

    // casos 1xN ou Nx1
    ans = max(ans, L);
    ans = max(ans, C);

    printf("%d\n", ans);

    return 0;
}