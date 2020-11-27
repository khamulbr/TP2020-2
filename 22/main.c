#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivoBin = fopen("arq1.txt.dat", "r");

    if(arquivoBin==NULL){
        printf("Problema ao tentar abrir o arquivo destino");
        exit(1);
    }

    int lido;
    int posicao;
    char dado;

    for (posicao=1 ; posicao<=12; posicao++) {
        printf("valor lido: %d\n", lido);
        dado = lido - 100;
        printf("valor descriptografado: %c\n", dado);
        fread(&lido, sizeof(int), 1, arquivoBin);
    }

    fclose(arquivoBin);
    return 0;
}
