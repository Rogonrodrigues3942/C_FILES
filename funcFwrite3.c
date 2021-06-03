/*Função fwrite() - exemplo 3 -  gravando struct - aula 75 - parte 10 - Programação Descomplica em Linguagem C
03/06/2020.*/

#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main (void)
{
    FILE *arq = fopen("struct.txt", "wb");
    if(arq == NULL)
    {
        puts("Erro na abertura do arquivo struct.txt\n");
        system("pause"); system("pause");
        exit(1);
    }

    struct cadastro cad = {"Andre", "Rua 1", 31};

    fwrite(&cad, sizeof(struct cadastro), 1, arq);
    fclose(arq);
    system("pause"); 
    system("cls");

    return 0;
}