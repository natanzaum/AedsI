#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   // necess�rio para algumas opera��es com arquivos
#include <string.h>  // necess�rio para strtok()
#include <ctype.h>
#define MAX 80
/*struct cadastro
{
    int id;
    char nome[30];
    float n1;
    float n2;

};
*/

char opcao_menu()
{
system("cls");
printf(" (L)istar notas\n");
printf("(N)ovo aluno \n")
printf(" (F)im\n");
printf("> ");
return (toupper(getche()));
}
void novo_aluno()
{

}
void listar_notas()
{
int num,notas;
float
n1,n2,media;
char *nome;
char buf[MAX];
FILE *arq;
arq = fopen("dados.txt","r+");
if (arq == NULL)
{
printf("Erro ao abrir arquivo\n");

return;
}
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
fgets(buf,MAX,arq);
}
printf("----+----------------------+------+------\n");
media = media/notas;
printf("Media das notas = %4.1f\n",media);fclose(arq);}

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
