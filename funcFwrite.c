/*Exemplo1 fwrite() - aula 75 - Programação descomplicada em Linguagem C - 03/06/61 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *arq = fopen("vetor.txt", "wb");
    if(arq ==NULL)
    {
        puts("\nErro na abertura do arquivo vetor.txt!!\n");
        system("pause"); system("cls");
        exit(2);
    }

    int total_gravado, v[5] = {1, 2, 3, 4, 5};

    /*Grava todo o array no arquivo (5 posições). */
    total_gravado = fwrite(v, sizeof(int), 5, arq);
    
    /*Checando se os dados foram gravados corretamente.*/
    if(total_gravado != 5)
    {
        puts("Erro na escrita do arquivo!");
        system("pause");
        exit(2);

    }

    fclose(arq);

    return 0;

}