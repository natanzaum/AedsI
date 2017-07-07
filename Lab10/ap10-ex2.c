// Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>

void ackerman (int ack)
{
    printf ("%d  ", ack);
    if (ack != 1)
        if ((ack % 2) == 0)
            ackerman (ack/2);
        else ackerman (3*ack + 1);
}

int main (void)
{
    long int ack;
    printf ("Digite o termo inicial da Serie de Ackerman: \n");
    scanf ("%d", &ack);
    printf("\n");

    ackerman (ack);

    printf("\n\n");

    return 0;
}
