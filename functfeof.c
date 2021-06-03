/*Estudando a função feof(), como manipulkar arquivo com esta função. versão 1 -03/06/2021*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *arq = fopen("minusculo.txt", "r");

    if(arq == NULL){
        puts("Falha na abertura do arquivo minusco.txt!!");
        system("pause");
        exit(1);
    }

    char c = fgetc(arq);

    while(!feof(arq)){
        printf("%c", c);
        c = fgetc(arq);
    }

    fclose(arq);
    system("pause");

    return 0;
}