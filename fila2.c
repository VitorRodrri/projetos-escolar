#include <stdio.h>
#include<stdlib.h>
 
#define MAX 100010 // Constante. Substitui a estrutura nó.
 
typedef struct{
    int frente;
    int tras;
    int itens[MAX]; // Nós da fila.
}Fila;
 
void inicializarFila(Fila *fila){ // Criando a fila vazia.
    fila->frente = 0;
    fila->tras = -1;
}
 
int filaVazia(Fila *fila){
    return fila->frente > fila->tras; // 1 - Fila vazia | 0 - fila nao vazia
}
 
void enfileirar(Fila *fila, int valor){
    if(fila->tras < MAX){
        fila->tras++; // proximo.
        fila->itens[fila->tras] = valor;
    }
}
 
void desenfileirar(Fila *fila){
    if(!filaVazia(fila)){ // Se a fila não for vazia.
        fila->frente++;
    }
}
 
void imprimirFila(Fila *fila){
    if(filaVazia(fila)){ // Se a fila for vazia.
        printf("Fila vazia");
    }else{
        for(int i= fila->frente; i<= fila->tras;i++){
            printf("%d ", fila->itens[i]);
        }
        printf("\n");
    }
}
 
 
int main(){
    Fila fila;
    inicializarFila(&fila);
    int n, x, acao, valor; 
        scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&valor);
        enfileirar(&fila,valor);
    }
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%d",&acao);
        if(acao == 1){
           desenfileirar(&fila);
        }else if(acao == 2){
            int y;
            scanf("%d",&y);
            enfileirar(&fila,y);
        }
    }
    imprimirFila(&fila);
 
return 0;
}