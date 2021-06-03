/*Lendo a frase caractere a caractere*/

#include <stdio.h>
#include <stdlib.h>

int main ( void )
{

    FILE *arquivo;

    char LETRA;

    arquivo - fopen("frase.txt","r");

    puts("Frase contida no arquivo = ");
    while((LETRA  = fgetc(arquivo)) != EOF)
        printf("%c", LETRA);
    
    puts("\n\n");

    fclose(arquivo);

    system ("pause");
}