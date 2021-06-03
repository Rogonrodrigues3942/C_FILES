#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "w");

    char PALAVRA[20];

    puts("\n\nDigite uma palavra: ");
    fflush(stdin);
    fscanf(arquivo, "%s", PALAVRA);

    printf("Palavra contida no arquivo = %s", PALAVRA);

    system("pause");
    return 0;
}