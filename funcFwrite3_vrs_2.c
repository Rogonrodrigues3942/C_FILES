/*Função fwrite() - exemplo 3 -  gravando struct - aula 75 - parte 10 - Programação Descomplica em Linguagem C
2ª versão - fixação de conceito - 03/06/2020.*/

#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[30], endereco[30];
    int idade;
};

int main (void){

    FILE *arq = fopen("struct.txt","wb");
    if(arq == NULL)
    {
        puts("\nErro na abertura do arquivo struct.txt\n");
        system("pause"); system("cls");
        exit(1);
    }

    struct cadastro c = {"Rogério", "Rua Barrania 593", 50};

    fwrite(&c, sizeof(struct cadastro), 1, arq);
    fclose(arq);
    system("pause");
    system("cls");

    return 0;
}