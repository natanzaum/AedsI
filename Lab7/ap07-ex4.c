// Natan Pedersolli
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

    matriz3[linhasA][colunasB] = 0; //Limpa o "lixo" da matriz3 (Resultado)

    int a,b,c,d;
    printf ("Digite os elementos da matriz1 (3x3): \n"); //Recebe os elementos da matriz1
    for (a=0;a<linhasA;a++)
        for(b=0;b<colunaA;b++)
        scanf ("%f", &matriz1[a][b]);

    printf ("\nDigite os elementos da matriz2 (3x3): \n"); //Recebe elementos da matriz 2
    for (c=0;c<linhasB;c++)
        for(d=0;d<colunasB;d++)
        scanf ("%f", &matriz2[c][d]);
        if (linhasA==colunasB) // Verifica a condição de existencia para a multiplicação
{
  for (a=0;a<linhasA; a++)
            for (b=0; b<colunasB; b++){
                aux=0;
                    for (c=0; c<linhasA; c++)
                    aux+= (matriz1[b][c] * matriz2[c][b]); //
                matriz3[a][b]=aux;}

    printf("\n\nO resultado da multiplicacao e: \n");
        for (c=0;c<linhasA;c++){
        for(d=0;d<colunasB;d++)
        printf ("%.2f ", matriz3[c][d]);
        printf("\n");}

}
            else printf("A matriz não existe! \n\n");
}
