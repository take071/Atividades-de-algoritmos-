 #include <stdio.h>

 int main()
 {
    int v[10][10];
    int i, j;
    int linha, coluna;
    
    printf("quantas linhas? ");
    scanf("%d", &linha);

    
    printf("quantas colunas? ");
    scanf("%d", &coluna);

    for(i = 0; i < linha; i++){
     for(j = 0; j<coluna; j++){
     printf("quais números deseja por na matriz? ");
      scanf("%d", &v[i][j]);
     }
    }
    
    printf("\nmatrix\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
 }