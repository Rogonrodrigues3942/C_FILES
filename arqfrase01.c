/*Cria e grava frase caractere a caractere.  Linguagem C - Autor: J. A. Manzano -  capitulo 8
páginas 194 e 195.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *arquivo;
    char letra;

    arquivo = fopen("frase.xxx","w");

    puts("\n\nEscreva a frase desejada: \n\n");

    while((letra = getchar())!= '\n')
        putc(letra, arquivo);

    fclose(arquivo);
    system("cls");
    system("pause");

    return 0;
}