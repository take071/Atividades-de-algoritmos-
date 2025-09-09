#include <stdio.h>

int main() {
    int n;

    // Exibir matriz 5x5 vazia para ajudar na visualização (modelo)
    printf("Modelo de matriz 5x5 vazia (todas as posições iniciam com zero):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d", 0);
        }
        printf("\n");
    }
    printf("\n");

    // Solicita a ordem do quadrado mágico (número ímpar)
    do {
        printf("Digite um número ímpar (ordem do quadrado mágico): ");
        scanf("%d", &n);
    } while (n < 1 || n % 2 == 0);

    int quadrado[n][n];

    // Inicializa a matriz com zeros
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            quadrado[i][j] = 0;

    int num = 1;
    int i = 0;
    int j = n / 2;

    // Preenche o quadrado mágico usando o método siamês
    while (num <= n * n) {
        quadrado[i][j] = num++;

        int next_i = (i - 1 + n) % n;
        int next_j = (j - 1 + n) % n;

        if (quadrado[next_i][next_j] != 0) {
            i = (i + 1) % n;
        } else {
            i = next_i;
            j = next_j;
        }
    }

    // Imprime o quadrado mágico
    printf("\nQuadrado mágico %dx%d:\n", n, n);
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            printf("%4d", quadrado[x][y]);
        }
        printf("\n");
    }

    return 0;
}
