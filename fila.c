#include <stdio.h>
#include<stdlib.h> // Alocação dinâmica. ->
 
typedef struct No{
    int dado;
    struct No* proximo;
}No;
 
typedef struct Fila{ // Queue.
    No* frente;
    No* tras; 
}Fila;
 
Fila* criarFila(){ // Criação de fila vazia.
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila->frente = NULL;
    fila->tras = NULL;
    return fila;
}
No* novoNo(int dado){ // Criação dos elementos que serão incorporados à fila.
    No* temp = (No*)malloc(sizeof(No));
    temp->dado = dado; // This. Significa que vai atualizar conforme vai sendo criado nós.
    temp->proximo = NULL;
    return temp; // Criou o elemento para ser inserido na fila.
}
// Criar os elementos com o comportamento fila. Adicionando elemento á fila.
void enfileirar(Fila* fila,int dado){
    No* temp = novoNo(dado);
        if(fila->tras == NULL){
            fila->frente = fila->tras = temp;
            return; // Força a finalização da minha função.
        }
    fila->tras->proximo = temp;
    fila->tras = temp;
}
int remover_fila(Fila* fila){
    if(fila->frente == NULL){
        printf("Fila está vazia!\n");
        return -1; // Finaliza aqui se entrar no IF.
    }
    No* temp = fila->frente;
    int dado = temp->dado;
    fila->frente = fila->frente->proximo;
        if(fila->frente == NULL){
            fila->tras = NULL;
        }
    free(temp);
        return dado;
}
 
int eh_vazia(Fila* fila){
    return fila->frente == NULL;
}
 
 
void impressao_fila(Fila* fila){
    if(eh_vazia(fila)){
        printf("Fila Vazia!\n");
        return; 
    }
  No * temp = fila->frente;
  printf("Elementos da fila: ");
    while(temp){
        printf("%d ", temp->dado);
        temp = temp->proximo;
    }
    printf("\n");
}
int main(){
    Fila* fila = criarFila();
    enfileirar(fila,10);
    enfileirar(fila,20);
    enfileirar(fila,90);
    enfileirar(fila,1);
    enfileirar(fila,100);
    impressao_fila(fila);
    printf("Remover elemento: %d\n",remover_fila(fila));
    printf("Remover elemento: %d\n",remover_fila(fila));
    printf("Remover elemento: %d\n",remover_fila(fila));
    impressao_fila(fila);
    enfileirar(fila,1000);
    impressao_fila(fila);
return 0;
}