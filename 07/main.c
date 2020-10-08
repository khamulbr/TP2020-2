#include <stdio.h>
#include <stdlib.h>

void mistura(char primeiraPalavra[4], char segundaPalavra[4], char* retorno){
    int i = 0;
    int indice;
    do {
        indice = i*2;
        retorno[indice] = primeiraPalavra[i];
        indice = (i*2)+1;
        retorno[indice] = segundaPalavra[i];
        i = i + 1;
    } while (i <= 3);

    printf("O retorno eh %s\n", retorno);
    return retorno;
}


int main()
{
    char bom[4] = "BOM";
    char dia[4] = "DIA";
    char resposta[7];
    printf("o valor em bom %s\n", bom);
    printf("o valor em dia %s\n", dia);

    mistura(bom, dia, resposta);

    printf("A resposta eh %s\n", resposta);
    return 0;
}
