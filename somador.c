#include <stdio.h>

int main() {
 int a = 1;
 float soma, numero;
 
 printf("escreva alguns números 10 vezes para serem somados no final \n", a);
 
 while (a <= 10) {
 printf("número %d: \n", a);
 scanf("%f", &numero);
 soma = soma + numero;
 a++;
 }
 printf("a soma total é: %.2f\n", soma);
 
}