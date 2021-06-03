/*Estudando a função feof(), como manipulkar arquivo com esta função. versão 3 -03/06/2021*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");

    FILE *arquivo = fopen ("minusculo.txt","r");
    if(arquivo == NULL){
        puts("\nErro na abertura do arquivo minusculo.txt!\n");
        system("pause"); system("cls"); 
        exit(1);
    }

    char caractere = fgetc(arquivo);

    while(!feof(arquivo))
    {
        printf("%c", caractere);
        caractere = fgetc(arquivo);
    }
    puts("\n");
    fclose(arquivo);
    system("pause"); system("cls");

    return 0;
}