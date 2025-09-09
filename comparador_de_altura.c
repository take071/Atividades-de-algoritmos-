#include <stdio.h> 

int main (){

char nome[50];
float altura;
 char sexo;

float maior_altura = 0.0;
float menor_altura = 10000.0;

float soma_mulheres = 0.0;
float soma_homens = 0.0;
 int cont_homens = 0;
 int cont_mulheres = 0;
float soma_total = 0.0;

for (int i = 0; i < 50; i++){
  printf("pessoa %d(digite seu nome): \n", i +1);
  getchar ();
   scanf("%49[^\n]",nome);
    

  printf("Altura (em metros): ");
   scanf("%f", &altura);

  printf("sexo (M/F): ");
   scanf(" %c", &sexo);
   
   soma_total += altura;
   
   if(altura > maior_altura ){
      maior_altura = altura;
   }
   
   if (altura < menor_altura){
       menor_altura = altura;
   }
   
   if (sexo == 'f' || sexo == 'F'){
       soma_mulheres += altura;
       cont_mulheres++;
   }
  else if (sexo == 'M' || sexo == 'm'){
       soma_homens += altura;
       cont_homens++;
       }
       
       printf("\n");
       }
   
   
   float media_geral = soma_total / 50;
   float media_mulheres = cont_mulheres > 0 ? soma_mulheres / cont_mulheres: 0;
   float media_homens = cont_homens > 0 ? soma_homens / cont_homens: 0;
   
   printf("Maior altura: %.2f metros\n", maior_altura);
    printf("Menor altura: %.2f metros\n", menor_altura);
    printf("Média de altura das mulheres: %.2f metros\n", media_mulheres);
    printf("Média de altura dos homens: %.2f metros\n", media_homens);
    printf("Média de altura da turma: %.2f metros\n", media_geral);
    
    return 0;
}