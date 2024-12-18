#include <stdio.h>

// FOR | WHILE | DO...WHILE

int main(){

    int n=10,i;

    printf("Imprimindo FOR: ");

    for(i=0;i<=10;i++){

        printf("%d ",i);

    }

    printf("\n");

    printf("Imprimindo WHILE: ");

    i=0;

    while(i<=n){

        printf("%d ",i);

        i++;

    }

    printf("\n");

    printf("Imprimindo DO...WHILE: ");

    i=0;

    do{

        printf("%d ",i);

        i++;

    }while(i<=n);

return 0;

}

/*  Representação de caracteres na impressão dos dados

   Inteiro - %d,%i

   float - %f

   double - %lf

   char - %c

   bool - %b (#include<stdbool.h)

   Ponteiro - * (antes da variável)

   Referência - &

*/
 