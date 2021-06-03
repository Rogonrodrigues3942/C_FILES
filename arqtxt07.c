#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    system("cls");
    FILE *ptrarq;
    char frase[81];

    ptrarq = fopen("FRASE2.TXT", "r");

    puts("\n\tLeitura de arquivo\n");

    while( fgets( frase,81, ptrarq) != NULL)
        printf("%s", frase);
    
    fclose(ptrarq);
    
    system("pause");
    return 0;
}