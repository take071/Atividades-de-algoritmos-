#include <stdio.h>  
// adicioneu printf para imp, e grat, além de tirar os parênteses das equações.
float sb, grat, imp;

int main() {
    printf("\n Entre com o Salário do Funcionário: \n");
    scanf("%f", &sb);

    grat = sb * 0.05;
    imp = sb * 0.07;

    sb = sb + grat - imp;

    printf("\n O Salário Liquido = %0.2f\n", sb);
    printf("\n imposto salarial é = %0.2f\n", imp);
    printf("\n gratificação salarial é = %0.2f", grat);
    return 0;
}
