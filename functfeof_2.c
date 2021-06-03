/*Estudando a função feof(), como manipulkar arquivo com esta função. versão 2 -03/06/2021*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");

    FILE *arquivo = fopen("minusculo.txt", "r");

    if(arquivo ==NULL){
        puts("Erro na abertura do arquivo minusculo.txt!! \n");
        system("pause"); system("cls"); exit(1);
    }

    char c = fgetc(arquivo);

    while(!feof(arquivo))
    {
        printf("%c", c);
        c = fgetc(arquivo);
    }

    fclose(arquivo);
    system("pause");

    return 0;
}