//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 10

typedef struct cadastro{
     char nome[30];
     int idade;
     float peso;
     float altura;
    }nova_pessoa[MAX];

int main()
{
    int contador;
    int i;
    struct cadastro vetorCadastro[MAX];

    printf("Digite a quantidade de pessoas que deseja cadastrar: \n");
    do
        {
        scanf("%d", &contador);
       if (contador>10 || contador <=0)
            printf("Digite um numero de 0 a 10\n\n");
        }while (contador >10 || contador<=0);

for (i=0; i<contador; i++)
{
    fflush(stdin);

 printf("Digite o nome do paciente %d: \n", i+1);
 gets(vetorCadastro[i].nome);
 fflush(stdin);

 printf("Digite a idade do paciente %d: \n", i+1);
 scanf("%d", &vetorCadastro[i].idade);

 fflush(stdin);
 printf("Digite o peso do paciente %d: \n", i+1);
 scanf("f", &vetorCadastro[i].peso);

 fflush(stdin);
 printf("Digite a altura do paciente %d: \n", i+1);
 scanf("%f", &vetorCadastro[i].altura);

 printf("\n");
}

 printf("\nOs dados dos pacientes cadastrados sao: \n\n");
    for (i=0; i<contador; i++)
    {
        printf("Paciente: %d \n", i+1);
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Peso: %.2f \n", vetorCadastro[i].peso);
        printf("Altura: %.2f \n", vetorCadastro[i].altura);
        printf(("----------\n"));
    }

    return 0;
}
