/*Exemplo 2 fwrite() - aula 75 - Programação descomplicada em Linguagem C - 2ª versão - 03/06/61 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *arq = fopen("dados.txt", "wb");
    if(arq == NULL)
    {
        puts("\nErro na abertura do arquivo dados.txt!\n");
        system("pause"); system("pause");
        exit(1);
    }

    char nome[31] = "Rogério Gonçalves Rodrigues";
    float num = 50;
    int v[6] = {1, 2, 3, 4, 5, 6};

    fwrite(nome,sizeof(char), 31, arq);
    fwrite(&num, sizeof(float), 1, arq);
    fwrite(v, sizeof(int), 6,arq);

    fclose(arq);
    system("pause");
    system("cls");

    return 0;
}