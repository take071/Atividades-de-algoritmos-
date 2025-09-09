#include <stdio.h>

int main() {
    int valor, original;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    original = valor;

    if (valor < 2 || valor == 3) {
        printf("Saque de R$%d não é possível com as notas disponíveis.\n", valor);
        return 0;
    }

    n100 = valor / 100;
    valor = valor % 100;

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;
    valor = valor % 10;

    n5 = valor / 5;
    valor = valor % 5;

    n2 = valor / 2;
    valor = valor % 2;

    if (valor != 0) {
        printf("Saque de R$%d não é possível com as notas disponíveis.\n", original);
        return 0;
    }

    printf("Saque de R$%d realizado com:\n", original);
    if (n100 > 0) printf("%d nota(s) de R$100\n", n100);
    if (n50 > 0) printf("%d nota(s) de R$50\n", n50);
    if (n20 > 0) printf("%d nota(s) de R$20\n", n20);
    if (n10 > 0) printf("%d nota(s) de R$10\n", n10);
    if (n5 > 0) printf("%d nota(s) de R$5\n", n5);
    if (n2 > 0) printf("%d nota(s) de R$2\n", n2);

    return 0;
}
