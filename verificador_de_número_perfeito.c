#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    if (soma == n) {
        printf("É perfeito!\n");
    } else {
        printf("Não é perfeito.\n");
    }

    return 0;
}
