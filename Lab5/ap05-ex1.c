#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetorInt[10];
  int i;

    printf("Digite 10 numeros: \n");

    for (i=0; i<10; i++)
    {
      scanf("%d", &vetorInt[i]);
    }

   for (i = 0; i< 10; i++)
   {
     printf("Os valores digitados foram: %d \n", vetorInt[i]);
   }
}
