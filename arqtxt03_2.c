/*o arqtxt03.c armanzenará um valor em disco e depois mostrará em video o mesmo armazenado. Livro Linguagem c - 
autor: J. A. Manzano - Capítulo 8 - página 196 - Refazendo para fixação.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");
    FILE *arquivo;
    char palavra[20];

    arquivo = fopen("arqtxt01.xxx", "r");

    fscanf(arquivo, "%s", palavra);
    printf("\n\nPalavra = %s.\n\n", palavra);

    system("pause");
    system("cls");
    fclose(arquivo);

    return 0;
}