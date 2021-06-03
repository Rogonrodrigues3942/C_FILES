/*Teste leitura - fonte: Programação Descomplicada em Linguagem C - usando as funções 
fputc(), fopen() e fclose() - acessando o caractere.txt pela laço while- versão 5 - caractere - 02/06/2021*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    system("cls");
    puts("Lendo caractere a caractere com while");

    FILE *f = fopen("texto.txt", "r");

    if ( f == NULL )
    {
        puts("ERRO NA ABERTURA");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while( c != EOF)
    {
        printf("%c", c);
        c = fgetc(f);
    }
    puts("\nFIM\n");
    fclose(f);
    system("pause");

    return 0;
}