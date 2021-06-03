/*Criação de arquivo texto - Livri Linguagem C - MANZANO - Capítulo 8 páginas 194 e 195.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");
    FILE *ptrarq; /*Definição do ponteiro para o arquivo.*/

    ptrarq = fopen("arqtxt01.xxx", "a");

    puts("\nO arqtxt01.xxx foi criado.\n");
    system("pause");
    system("cls");

    puts("Fechando o arqtxt01.xxx.");
    fclose (ptrarq);
    system("pause");
    system("cls");
    system("dir");


    return 0;
}