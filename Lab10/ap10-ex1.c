//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pgeo(int x, float y, int z)
{
    int c;
    if (z==0) //caso base
        printf("\n");
    else
    {
        c = x;
        printf(" %d ",c);
        z--;
        pgeo(c*y,y,z);
    }
}

int main ()
{
   int x, y;
   float z;
   printf("Digite o termo inicial: \n");
   scanf("%d", &x);
   printf("Digite a razao da pg: \n");
   scanf("%f", &z);
   printf("Digite o numero de termos da pg: \n");
   scanf("%d", &y);

   printf("\n\nResultado =>> ");
   pgeo(x, x, y);

   return 0;

}
