#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arquivo;

    arquivo = fopen("arquivo.txt","a");

    fclose(arquivo);

    puts("Um arquivo txt foi criado.\n");

    system ("pause");
    return 0;
}
