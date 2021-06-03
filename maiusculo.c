/*Manipulando arquivos da linguagem C, aprendendo converter letras minúsculas para maiúsculas. 
Exercício baseado na aula 71 - parte 6 do canal Programação Descomplicada. 03/06/2021.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    FILE *f1, *f2;
    f1 = fopen("minusculo.txt","r");
    f2 = fopen("maiusculo.txt", "w");

    if(f1 == NULL || f2 == NULL)
    {
        puts("Erro de abertura de arquivo!!\n");
        system("pause");
        exit(1);
    }

    char c = fgetc(f1);

    while (c != EOF)
    {
        putc(toupper(c), f2); //converte para maiusculo e grava as informações em f2.
        c = fgetc(f1);
    }


    fclose(f1);
    fclose(f2);

    return 0;
}