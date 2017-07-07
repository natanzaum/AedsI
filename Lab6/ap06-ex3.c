//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>

#define linhasA 3
#define colunaA 3
#define linhasB 3
#define colunasB 3


void main(void)
{
    float matriz1[linhasA][colunaA];
    float matriz2[linhasB][colunasB];
    float matriz3[linhasA][colunasB];
    float aux;
    matriz3[linhasA][colunasB] = 0;

    int a,b,c,d;
//Pega os elementos da matriz
    printf ("Digite os elementos da matriz1 (3x3): \n");
    for (a=0;a<linhasA;a++)
        for(b=0;b<colunaA;b++)
        scanf ("%f", &matriz1[a][b]);

    printf ("Digite os elementos da matriz2 (3x3): \n");
    for (c=0;c<linhasB;c++)
        for(d=0;d<colunasB;d++)
        scanf ("%f", &matriz2[c][d]);
//fim da parte que pega os elementos
//Verifica se linha de A é igual a coluna de B e faz o calculo.
        if (linhasA==colunasB)
{
  for (a=0;a<linhasA; a++)
            for (b=0; b<colunasB; b++){
                aux=0;
                for (c=0; c<linhasA; c++)
                   aux+= (matriz1[b][c] * matriz2[c][b]);

             matriz3[a][b]=aux;}


        for (c=0;c<linhasA;c++){
        for(d=0;d<colunasB;d++)
        printf ("%.3f ", matriz3[c][d]);
        printf("\n");}

}
            else {
                    printf("A matriz não existe! \n\n");}
}
