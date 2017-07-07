//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <string.h>

void binario(int x)
{
    if (x/2)
        if(x!=0)
          binario(x/2);
        else
          printf("\n");

    printf("%i", x%2);
}

int main() {

    int x;

    printf("Digite o numero que deseja converter em binario:");
    scanf("%d", &x);

	printf("\n\nValor em binario: ");
	binario(x);

	printf("\n\n");

	return 0;
}
