#include <stdio.h>
#include <stdlib.h>

char nome[41];
FILE *ptrarq;

void criar (void);
void cadastrar (void);
void exibir (void);

int main (void)
{
    int opcao = 0;

    while(opcao != 4)
    {
        system("cls");
        puts(" Menu Princpal");
        puts("+-------------+");
        puts("1 - Criar arquivo");
        puts("2 - Cadastrar registro");
        puts("3 - Exibir registros");
        puts("4 - Fim");
        puts("Escolha a sua opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);

        if( opcao != 4)
        {
            switch (opcao)
            {
                case 1:
                    criar();
                    break;
                case 2:
                    cadastrar();
                    break;
                case 3:
                    exibir();
                    break;
                default:
                    puts("Opcao invalida - Tecle <enter>");
                    getchar() + scanf("enter");
                    break;
            }
        }
    }

    return 0;
}

void criar (void)
{
    puts("\tCriacao de Arquivo");
    ptrarq = fopen("NOMESTXT.DAT", "w");
    puts("\tArquivo Criado!!");
    fclose(ptrarq);

    puts("Tecle <enter> para voltar ao menu");
    getchar() + scanf("Enter");

    return;
}

void cadastrar (void)
{
    puts("\tCadastramento de registros");
    ptrarq = fopen("NOMESTXT.DAT","a");
    puts("Entre com um nome ou tecle <Enter> para voltar ao menu ...: ");
    scanf("%[^\n]", nome);
    fputs(nome, ptrarq);
    fputs("\n", ptrarq);

    fclose(ptrarq);
    getchar() + scanf("enter");

    return;
}

void exibir (void)
{
    puts("Apresentacao dos registros");
    ptrarq = fopen("NOMESTXT.DAT","r");

    while (fgets(nome, 41, ptrarq) != NULL)
    {
        printf("%s", nome);
    }
    fclose(ptrarq);
    getchar() + scanf("Enter");
    
    return;
}
