/*Teste leitura - fonte: Programação Descomplicada em Linguagem C - usando as funções 
fputc(), fopen() e fclose() - acessando o caractere.txt - versão 4 - caractere - 02/06/2021*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    system("cls");
    puts("\nLendo caractere a caractere.\n\n");

    FILE *f;
    f = fopen("texto.txt", "r");
    if(f ==NULL)
    {
        puts("ERRO NA ABERTURA");
        system("pause");
        exit(10);
    }

    char c;
    int i;

    for(i = 1; i < 11; i++){
        c = fgetc(f);
        printf("%c", c);
    }

    puts("\nFim\n");
    fclose(f);
    system("pause");

    return 0;
}