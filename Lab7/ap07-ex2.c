//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int contador, i;
    float valor[10];


    printf("Digite 10 valores: \n");
    for (i=0;i<10; i++)
    {
       scanf("%f", &valor[i]);
    }
float menor, lugar;
menor = valor[0];

        for(i=0; i<10;i++)
        {
          if (valor[i]< menor)
                {
                  menor = valor[i];
                  lugar = i;
                }
        }
printf ("O menor elemento de N e: %f \n E sua posição dentro do vetor e: %f", menor, lugar);
}
