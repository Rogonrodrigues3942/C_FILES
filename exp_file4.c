/*Criando uma frase caractere a caractere.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo;

    char LETRA;

    arquivo = fopen("frase.text", "w");

    puts("\nEscreva a frase desejada!\n");

    while((LETRA = getchar()) != '\n' )
        putc(LETRA, arquivo);

        fclose(arquivo);
    
    system("pause");

}