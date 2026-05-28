#include <stdio.h>

int bit[505][505];

void update(int x, int y, int valor) {

    for (int i = x; i <= 500; i += (i & -i)) {
        for (int j = y; j <= 500; j += (j & -j)) {

            bit[i][j] += valor;
        }
    }
}

int query(int x, int y) {

    int soma = 0;

    for (int i = x; i > 0; i -= (i & -i)) {
        for (int j = y; j > 0; j -= (j & -j)) {

            soma += bit[i][j];
        }
    }

    return soma;
}

int main() {

    int Q;
    scanf("%d", &Q);

    while (Q--) {

        char op;
        scanf(" %c", &op);

        if (op == 'U') {

            int x, y, z, w, v;

            scanf("%d %d %d %d %d", &x, &y, &z, &w, &v);

            update(x, y, v);
            update(z + 1, y, -v);
            update(x, w + 1, -v);
            update(z + 1, w + 1, v);

        }
        else {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", query(x, y));
        }
    }

    return 0;
}