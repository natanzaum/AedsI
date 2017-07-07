// Natan Pedersolli
// 2012031670
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 10

typedef struct pessoa
{
     char nome[30];
     int idade;
     float peso;
     float altura;
    }individuo;


individuo novapessoa(i){

 individuo p;

 fflush(stdin);
 printf("Digite o nome do paciente %d: \n", i+1);
 scanf("%s",&p.nome);
 fflush(stdin);
 printf("Digite a idade do paciente %d: \n", i+1);
 scanf("%d", &p.idade);
 fflush(stdin);
 printf("Digite o peso do paciente %d: \n", i+1);
 scanf("%f", &p.peso);
 fflush(stdin);
 printf("Digite a altura do paciente %d: \n", i+1);
 scanf("%f", &p.altura);
 printf("\n");

return p;

}

void main(void)
{
    int contador;
    int i;
    struct pessoa vetorCadastro[MAX];

    printf("Digite a quantidade de pacientes que deseja cadastrar(1 a 10): \n");
    scanf("%d", &contador);

individuo a[contador];

for (i=0; i<contador; i++)
{
    a[i]=novapessoa(i);
}

 printf("\nDados dos pacientes cadastrados: \n\n");
    for (i=0; i<contador; i++)
    {
        printf("Paciente %d\n", i+1);
        printf("Nome: %s\n", a[i].nome);
        printf("Idade: %d\n", a[i].idade);
        printf("Peso: %.2f \n",a[i].peso);
        printf("Altura: %.2f \n",a[i].altura);
        printf("\n");
    }
}
