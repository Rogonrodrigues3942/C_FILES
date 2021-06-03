/*Estudando a função feof(), como manipulkar arquivo com esta função. 03/06/2021*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE * f = fopen("minusculo.txt", "r");

    if( f == NULL){
        puts("\nErro de abertura de arquivo.\n");
        system("pause");
        system("cls");
        exit(1);
    }

    char c = fgetc(f);

    while(!feof(f))
    {
        printf("%c", c);
        c = fgetc(f);
    }

    puts("\nFim!!\n");
    system("pause");
    
    return 0;
}