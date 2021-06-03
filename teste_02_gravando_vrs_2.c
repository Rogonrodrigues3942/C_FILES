/*Teste leitura - fonte: Programação Descomplicada em Linguagem C - usando as funções 
fputc(), fopen() e fclose() - acessando o caractere.txt - versão 2 - 01/06/2021*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void)
{
    system("cls");

    FILE *arq = fopen("texto.txt","w");

    char frase[21] = "A vida é de luta!!";
    int i;

    for (i = 0; i < strlen(frase); i++ )
        fputc(frase[i], arq);
    
    fclose(arq);
    system("pause");

    return 0;
}