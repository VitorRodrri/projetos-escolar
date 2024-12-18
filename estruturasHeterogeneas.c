#include <stdio.h>
 
// Structs -> Estruturas Heterogêneas.
// Vetores e Matrizes -> Estruturas Homogêneas.
 
typedef struct Pessoa {
    int idade;
    float peso;
    float altura;
} Pessoa;
 
void imprimePessoa(Pessoa p) {  // Polimorfismo.
    printf("Idade: %d - Peso: %.2f - Altura: %.2f\n", p.idade, p.peso, p.altura);
}
 
int main() {
    int n;
    printf("Digite o número de clientes: ");
    scanf("%d", &n);
 
    Pessoa p[n];
    for(int i = 0; i < n; i++) {
        printf("Digite as informações do cliente: %d\n", i+1);
        printf("Digite sua idade: ");
        scanf("%d", &p[i].idade);
        printf("Digite seu peso: ");
        scanf("%f", &p[i].peso);
        printf("Digite sua altura: ");
        scanf("%f", &p[i].altura);
        printf("\n");
    }
 
    printf("Suas informações serão impressas logo abaixo\n");
    for(int i = 0; i < n; i++) {
        printf("Informações do cliente: %d\n", i+1);
        imprimePessoa(p[i]);
    }
 
    return 0;
}