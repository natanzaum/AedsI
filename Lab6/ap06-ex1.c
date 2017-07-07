/*
Nome: Natan Gonçalves Pedersolli
MAtricula: 2012031670
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 12 // Achei melhor juntar os dois #define em uma só variavel pra simplificar o codigo.


void main(void)
{
    int LIN, COL;
    int a,b,c,d,e,f;

   printf ("Digite as dimencoes da matriz N x N: \n");
   scanf("%d %d", &LIN, &COL);
   while (LIN > MAX || COL > MAX) // Mostra mensagem na tela enquanto o usuario digitar numeros maiores que o MAX permitido.
   {
       printf("Digite numeros entre 1 e 12!!! \n\n");
       scanf("%d %d", &LIN, &COL);

   }
   printf("\n"); // Salta uma linha pra não ficar embolado

      int matriz1[LIN][COL]; // Declaração da Matriz 1, 2.
      int matriz2[LIN][COL];

            printf("Digite a matriz1 \n");

            for (a=0; a<LIN; a++)
            for (b=0; b<COL; b++)
            {
             scanf ("%d", &matriz1[a][b]);
            }

            printf("\n"); // Salta uma linha pra nao ficar embolado

            printf("Digite a matriz2 \n");
            for (c=0; c<LIN; c++)
            for (d=0; d<COL; d++)
            {
             scanf ("%d", &matriz2[c][d]);
            }

            printf("\n"); // Salta uma linha pra nao ficar embolado

            printf("A soma da matriz1 + matriz2 e: \n\n"); // Soma as duas matrizes
            for(e = 0 ; e < LIN ; e++)
            {
              for(f = 0 ; f < COL ; f++)
              {
              printf("%d ", matriz1[e][f]+matriz2[e][f]);
              }
            printf("\n");
            }
}
