/*Teste leitura - fonte: Programação Descomplicada em Linguagem C - usando as funções 
fseek() e fread, comando SEEK_SET - acessando o arquivo.txt e seus dados- 01/06/2021*/

#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[21], rua[21];
    int idade;
};

int main (void)
{
    FILE *f = fopen("arquivo.txt","rb");

    if(f ==NULL)
    {
        puts("Falha na abertura!\n");
        system("pause");
        exit(1);
    }

    struct cadastro c;
    fseek(f, 1 * sizeof(struct cadastro), SEEK_SET);
    fread(&c, sizeof(struct cadastro),1,f);
    printf("\n%s\n%s\n%d\n\n", c.nome, c.rua, c.idade);

    fclose(f);
    system("pause");

    return 0;
}