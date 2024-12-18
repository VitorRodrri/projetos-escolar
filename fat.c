#include <stdio.h>

// Estrutura de dados homegênea - Vetores e Matrizes

// Estrutura de dados heterogênea - Registros (Structs)
 
 
int main(  ){

  int vetor[5]={1,2,3,4,5};

  //vetor[0] = 1;

  //vetor[1]= 2;

  //vetor[2] = 3;

  //vetor[3] = 4;

  //vetor[4] = 5;

    for(int i=0;i<5;i++){

        printf("%d ", vetor[i]);

    }

    printf("\n");

    // Fatorial

    int x;

    printf("Digite o tamanho do vetor: ");

     scanf("%d",&x);

    int fat[x],aux=1;

     printf("Digite os elementos do vetor: ");

     for(int i=0;i<x;i++){

         scanf("%d", &fat[i]);

         aux = aux * fat[i];

     }

     printf("Os elementos e posições são \n");

     for(int i=0;i<x;i++){

         printf("O elemento na posição %d é: %d\n",i, vetor[i]);

     }

     printf("O fatorial é: %d",aux);

return 0;

}
 