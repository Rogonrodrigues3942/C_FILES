/*Cria e grava frases, versão melhorada usando fgets e fputs - Capitulo 8  - Linguagem C - J. A. MANZANO
páginas 198 e 199.*/

#include <stdio.h>
int main (void){

    FILE *ptrarq;
    char resp, frase[81];

    resp = 's';

    ptrarq = fopen("FRASE2.TXT", "w");

    while(resp == 's' || resp == 'S'){
        puts("\n\tDigite uma frase qualquer\n");
        fflush(stdin);
        fgets(frase, 81, stdin);
        fputs(frase, ptrarq);
        puts("\n\nDeseja copntinuar? [S/N]\n");
        fflush(stdin);
        scanf("%c", &resp);
    }

    fclose(ptrarq);

    return 0;
}