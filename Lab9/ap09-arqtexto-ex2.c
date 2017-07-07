// Natan Pedersolli
// 2012031670
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define MAX 80

char opcao_menu()
{
system("cls");
printf(" (L)istar notas\n");
printf(" (N)ovo aluno \n");
printf(" (F)im\n");
printf("> ");
return (toupper(getche()));
}
void novo_aluno()
{
  int num;
  float n1,n2;
  char nome[MAX];
  num = 0;
  n1 = n2 = 0;

        FILE *file;
        file = fopen("dados.txt", "a+");
        if (file==NULL)
        {
        printf("Erro ao abrir arquivo\n");
        return;
        }
            fflush(stdin);
            printf("\n\nDigite o numero do aluno: \n");
            scanf("%i", &num);
            fflush(stdin);
            printf("Digite o nome do aluno: \n");
            gets(nome);
            fflush(stdin);
            printf("Digite a nota 1: \n");
            scanf("%f", &n1);
            fflush(stdin);
            printf("Digite a nota 2: \n");
            scanf("%f", &n2);
            fflush(stdin);
            fprintf(file,"%i,%s,%2.1f,%2.1f",num,nome,n1,n2); // Grava dados no arquivo
            fputs("\n", file); // Quebra linha para começar um noco cadastro na proxima vez que usar a função de cadastro.
                               // Sem essa quebra de linha o cadastro não funciona corretamente
            fclose(file);
}

void listar_notas()
{
int num,notas;
float n1,n2,media;
char *nome;
char buf[MAX];
FILE *arq;
arq = fopen("dados.txt","r");

if (arq == NULL)
{
printf("Erro ao abrir arquivo\n");

return;
}
printf("%c\n\n\n\n", buf);
printf("\n");
printf("NUM |         NOME         |  N1  |  N2 \n");
printf("----+----------------------+------+------\n");
notas = 0;
media = 0;
fgets(buf,MAX,arq);
while (!feof(arq))
{
num = atoi(strtok(buf,","));
nome = strtok(NULL,",");
n1 = atof(strtok(NULL,","));
n2 = atof(strtok(NULL,","));
printf("%03d | %-20s | %4.1f |%4.1f\n",num,nome,n1,n2);
notas = notas + 2;
media = media + n1 + n2;
fflush(stdin);
fgets(buf,MAX,arq);
}
printf("----+----------------------+------+------\n");
media = media/notas;
printf("Media das notas = %4.1f\n",media);
fclose(arq);}

int main(int args, char * arg[])
{
char op;
do
{
op = opcao_menu();
if (op == 'L')
listar_notas();
if (op == 'N')
novo_aluno();
printf("\n");
system("pause");
}
while (op != 'F');


return 0;

}
