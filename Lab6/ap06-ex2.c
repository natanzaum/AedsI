// Natan Pedersolli
// 2012031670

#include <stdio.h>
#include <stdlib.h>

#define N 3

void vetormatriz (double v[], double A[N][N])
{
   int a,b,c;
   c=0;

    for (a=0;a<N;a++)
       for (b=0;b<N;b++)
         {
          A[a][b]= v[c];
          c=c+1;
          printf("Linha %d - Coluna %d = %lf", a+1,b+1,A[a][b]);
          printf("\n");
         }
}

void main(void)
{
    int a,b;
    double A[N][N];

    a=N*N;

    double v[a];
    printf("Digite os numeros do vetor:\n");

    for (b=0;b<a;b++)
    scanf("%lf", &v[b]);

    vetormatriz(v,A);

}
