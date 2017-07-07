// Natan Pedersolli
// 2012031670

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int q,i;
  float media, soma;
  media = soma = 0; // Retira o "lixo" das variaveis
    printf("Digite a quantidade de alunos: \n");
    scanf("%d", &q);

    int *n; // Função calloc
    n = (int *) calloc(q,sizeof(int)); // Usa Q para especificar o numero de vetores

  if (n == NULL) // Verifica se tem memoria suficiente. Caso não tenha, imprime mensagem de erro e fecha o programa
    {
    printf ("\n\nERRO: Não foi possível alocar a memória solicitada!! \n");
    exit(1);
    }

  else // Se a memoria for suficiente
    {
        printf("\nDigite as idades dos alunos da turma: \n");
        for(i=0; i<q; i++) //Pega as idades
            scanf("%d", &n[i]);

        for (i=0; i<q; i++) // Faz a soma das idades
        {
            soma = soma+n[i];
        }
        media = soma/q; // Faz a media das idades

        printf("\n\nA media das idades e: %.2f\n", media);
    }
}
