#include <stdio.h>

int main() {
    float soma_a = 0.0;
    
    for (int i = 1; i <= 99; i += 2) {
    soma_a += 1.0 / i;
    }
    float soma_b = 0.0;
      int sinal = 1;
       int contador = 0;
        int j = 1;
    
    
     while (contador < 20){
     soma_b += sinal * (1.0 / j);
     sinal *= -1;
     j +=2;
     contador++;
     }
    
    printf("resultado da parte a: %.6f\n", soma_a);
    
    printf("resultado da parte b: %.6f\n", soma_b);
    
    return 0;
}
    