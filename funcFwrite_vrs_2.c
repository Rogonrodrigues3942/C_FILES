/*Exemplo1 fwrite() - aula 75 - Programação descomplicada em Linguagem C - 2ª versão - 
fixação de exercício - 03/06/61 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *arq = fopen("vetor.txt", "wb");

    if (arq == NULL)
    {
        puts("\nFalha na abertura do arquivo vetor.txt!!\n");
        system("pause"); system("cls");
        exit(1);
    }

    int valor_gravado, v[5] = { 1, 2, 3, 4, 5};

    valor_gravado = fwrite(v, sizeof(int), 5, arq);

    if(valor_gravado != 5)
    {
        puts("Erro de gravação no arquivo vetor.txt!");
        system("pause");
        exit(1);
    }
    else
        puts("Gravacao com sucesso no arquivo vetor.txt!");

    fclose(arq);
    system("pause");
    system("cls");
    
    return 0;
}