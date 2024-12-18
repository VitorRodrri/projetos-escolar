#include <stdio.h>
// funções
 
int soma(int x,int y){ // Com retorno e com parâmetros.
    return x+y;
}
void soma_v(int c, int d){ // Sem retorno e com parâmetros.
    printf("%d\n",c+d);
}
void soma_2(){ // Sem parâmetros e sem retorno.
    int a=20,b=20;
    printf("%d\n",a+b);
}
int soma_3(){ // Sem parâmetros e com retorno.
    int a= 90,b=10;
    return a+b;
}
 
 
int main(){
   int a=10,b=20;
   printf("%d\n",soma(a,b));
   soma_v(a,b);
   soma_2();
   printf("%d",soma_3());
return 0;
}