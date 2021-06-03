/*Exemplo 2 fwrite() - aula 75 - Programação descomplicada em Linguagem C - 03/06/61 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE * arq = fopen("dados.txt", "wb");

    if(arq == NULL)
    {
        puts("\nErro a abrir o arquivo dados.txt\n");
        system("pause"); system("cls");
        exit(1);
    }

    char str[21] = "Hello world!";
    float x = 5;
    int v[5] = {1, 2, 4, 5};

    fwrite(str, sizeof(char), 21, arq);
    fwrite(&x, sizeof(float), 1, arq);
    fwrite(v, sizeof(int), 5, arq);

    fclose(arq);
    system("pause");

    return 0;
}