#include <stdio.h>
 
 int main() {
 
 float num1, num2;
 char p;
 
  printf("digite o primeiro número: \n");
  scanf("%f",&num1);
  
  printf("digite o segundo número: \n");
  scanf("%f",&num2);
  
  printf("digite símbolo numérico: \n");
   scanf("%s",&p);
   
   switch(p) {
   case'+':
   printf("a soma dos valores é: %.2f", num1 + num2);
   break;
   
   case'-':
   printf("a subtração dos valores é: %.2f", num1 - num2);
   break;
   
   case'*':
   printf("a multiplicação dos valores: %.2f", num1 * num2);
   break;
   
   case'/':
   if(num2 == 0) {
    printf("não é possível fazer a operação matemática");
    //break;
    }
    printf("a divisão dos valores é igual: %.2f", num1 / num2);
    break;
    default:
    printf("operação inválida");
    break;
   }
   return 0;
  }