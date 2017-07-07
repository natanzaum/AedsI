#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void main(void)
{
    int n;
    int i;

   printf("Digite a quantidade de vetores(Valor entre 1 e 100): \n");

         do
         {
          scanf("%d", &n);
         }while (n>MAX||n==0); //Enquanto o valor for maior que >100 e <0 ele fica pedindo para digitar um numero.

             float vetor[n]; // Declaração do vetor com N valores.

    printf("\nDigite %d numeros: \n", n);

        for (i=1; i<=n; i++)
           {
             scanf("%f", &vetor[i]);
           }

     printf("\n\n"); //Espaço

        for (i=n; i<=n && i!=0 ; i--)
          {
               printf("O valor em ordem inversa e: %.3f \n", vetor[i]);
          }

}
