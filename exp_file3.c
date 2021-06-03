#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo;

    char PALAVRA[20];
    arquivo = fopen("Arquivo.txt","r");
    fscanf(arquivo,"%s", PALAVRA);

    printf("\nPalavra contida no arquivo =%s.\n\n", PALAVRA);

    system ("pause");
    fclose(arquivo);
    return 0;

}