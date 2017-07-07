// Natan Pedersolli
//2012031670

#include <stdio.h>
#include <stdlib.h>

#define tamanho 4

void main(void)
{
int a,i;
int valor;
int matriz[tamanho][tamanho];
float soma = 0;
float media;

printf("Digite os elementos da matriz 4x4: \n"); // Pega dados da matriz
  for(i=0;i<tamanho; i++)
    for (a=0; a<tamanho; a++)
       scanf("%d", &matriz[a][i]);

    printf("\n\nA matriz digitada e: \n");// Imprime a matriz
    for(i=0;i<tamanho; i++)               // Achei melhor imprimir a matriz para eu conferir manualmente se o programa funcionou mesmo rsrs
    {
       for (a=0; a<tamanho; a++)
         printf("%d ", matriz[a][i]);
    printf("\n");
    }

    for (a=0; a<tamanho;a++) // Faz a soma dos elementos da diagonal
    soma = soma + matriz[a][a];

 media = soma/4;// Calcula a media
 printf ("\nA media da diagonal principal e: %4.2f \n\n", media);
}
