#include <stdio.h>

int main() {
  int n, i = 1;
  int fatorial = 1;
  
  printf("escreva um número positivo para ser fatorado:\n", n);
   scanf("%d", &n);
   
   printf("O resultado será igual %d! \n", n);
    
     while ( i <= n) {
       printf("%d ", i);
        fatorial *= i;
         
         if ( i < n) {
          printf("x");
          }
       i++;
       }
       
       fatorial = (fatorial == 0) ? 1: fatorial;
       
       printf("=%d", fatorial);
       
  return 0;
}