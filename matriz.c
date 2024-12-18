#include <stdio.h>
// Estrutura de dados homegênea - Vetores e Matrizes
// Estrutura de dados heterogênea - Registros (Structs)
 
int main(  ){
  int matriz[3][2]={
      {1,2},
      {4,5},
      {7,8}
  };
   // matriz[0][0] = 1;
   // matriz[0][1]= 2;
   // matriz[0][2] = 3;
   // matriz[1][0]= 4;
   // matriz[1][1] = 5;
   // matriz[1][2]= 6;
   // matriz[2][0]= 7;
   // matriz[2][1] = 8;
   // matriz[2][2] = 9;
        for(int i=0;i<3;i++){ // Linha
            for(int j=0;j<2;j++){ // Coluna
                printf("%d ",matriz[i][j]);
            }
            printf("\n");
        }
    printf("Digite as dimensões da matriz: ");
    int n,m;
        scanf("%d %d",&n,&m);
    int matrix[n][m];
    printf("Digite os elementos da matriz abaixo\n\n");
    for(int i=0;i<n;i++){ // Linha
        for(int j=0;j<m;j++){ // Coluna
            printf("Digite o elemento da linha %d e da coluna %d: ", i, j);
            scanf("%d", &matrix[i][j]);
           // printf("\n");
        }
    }
     for(int i=0;i<n;i++){ // Linha
            for(int j=0;j<m;j++){ // Coluna
                printf("%d ",matrix[i][j]);
            }
            printf("\n");
        }
}