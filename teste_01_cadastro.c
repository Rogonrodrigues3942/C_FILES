/*Teste cadastrado - fonte: Programação Descomplicada em Linguagem C - usando a função 
fseek() - 01/06/2021*/

#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[21], rua[21];
    int idade;
};

int main(void)
{
    FILE *f = fopen("arquivo.txt", "wb");

    if(f == NULL)
    {
        puts("Erro de abertura!");
        system("pause");
        exit(1);
    }
    struct cadastro cad[4] = {
        "Ricardo", "Rua 1", 31,
        "Carlos", "Rua 2", 28,
        "Ana", "Rua 3", 45,
        "Bianca", "Rua 4", 32
    };

    fwrite(cad, sizeof(struct cadastro),4,f);
    fclose(f);
    system("pause");
  
    return 0;
}