#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  float vetorFloat[7];
  int i;

    printf("Digite 7 numeros reais: \n");

    for (i=0; i<7; i++)
    {
      scanf("%f", &vetorFloat[i]);
    }
    printf("\n"); //Espaço para organizar melhor o texto.
    for (i = 0; i<7; i++)
   {
     printf("Os valores digitados foram: %f \n", vetorFloat[i]);
   }

   printf("\n ===Vetores Pares ===\n\n"); // Coloquei essa linha somente para separar as coisas na tela.

   for (i = 0; i< 7; i++)
   {
     if (i==2)
     printf("O valor no vetor [%d] e: %f \n", i, vetorFloat[i]);
     else if (i==4)
     printf("O valor no vetor [%d] e: %f \n", i, vetorFloat[i]);
     else if (i==6)
     printf("O valor no vetor [%d] e: %f \n", i, vetorFloat[i]);
   }
}

