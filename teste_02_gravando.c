/*Teste leitura - fonte: Programação Descomplicada em Linguagem C - usando as funções 
fputc(), fopen() e fclose() - acessando o caractere.txt - 01/06/2021*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    system("cls");
    puts("Gravando String em arquivo tipo txt");
     FILE *arq = fopen("texto.txt", "w");
     if ( arq == NULL){
         puts("Erro na abertura!!\n");
         system("pause");
         exit(1);
     }

     char caractere[31] = "Gravando Menu em Programa C";
     int i;

     for (i = 0; i < strlen(caractere); i++)
        fputc(caractere[i], arq);
    
    fclose(arq);
    system("pause");

    return 0;
}