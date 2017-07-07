//Natan Pedersolli
//2012031670
#include <stdio.h>
#include <stdlib.h>

#define LEN 50

struct endereco {
char rua[LEN];
char cidade[15];
char estado[3];
char cep[10]
};
struct endereco obtem_endereco(void)
{
struct endereco ender;
printf("\t Entre a rua: \n ");
gets(ender.rua);
printf("\t Entre a cidade:\n ");
gets(ender.cidade);
printf("\t Entre o estado:\n ");
gets(ender.estado);
printf("\t Entre o CEP:\n ");
gets(ender.cep);
return ender;
}
void imprime_endereco(struct endereco ender)
{
printf("\tRua: %s\n", ender.rua);
printf("\tCidade: %s\n", ender.cidade);
printf("\tEstado: %s\n", ender.estado);
printf("\tCEP: %s\n", ender.cep);
}
void main(void)
{
struct endereco residencia;
printf("Entre seu endereco residencial:\n");
residencia = obtem_endereco();
printf("\nSeu endereco eh:\n");
imprime_endereco(residencia);
}
