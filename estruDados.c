#include <stdio.h>
#include<string.h> // Biblioteca String - strcpy
// Estrutura de dados heterogênea - Registros (Structs)
 
int main(  ){
  struct Funcionario{ // Modelo de Estrutura.
     char nome[30];
     float salario;
     char cpf[15];
     int matricula;
     char setor;
  };
  struct Funcionario f1;
     strcpy(f1.nome,"Luis");
     f1.salario= 12000;
     strcpy(f1.cpf,"000.111.222-33");
     f1.matricula = 10;
     f1.setor = 'A';
printf("Nome: %s\n", f1.nome);
printf("Salario: %.2f\n", f1.salario);
printf("CPF: %s\n",f1.cpf);
printf("matricula: %d\n",f1.matricula);
printf("Setor: %c\n", f1.setor);

}

 