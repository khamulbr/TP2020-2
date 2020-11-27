#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Insira o nome do arquivo a ser criptografado: test.txt
// Resultado esperado:
// Arquivo test.txt criptografado com sucesso .. !!

int main()
{
    int ascIIValue;
    char nomeArquivo[50];
    char lido;
    printf("Insira o nome do arquivo a ser criptografado:");
    gets(nomeArquivo);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if(arquivo==NULL ){
        printf("Problema ao tentar abrir o arquivo origem");
        exit(1);
    }

    FILE *arquivoBin = fopen(strcat(nomeArquivo,".dat"), "wb");

    if(arquivoBin==NULL){
        printf("Problema ao tentar abrir o arquivo destino");
        exit(1);
    }

    lido = getc(arquivo);
    while(lido != EOF){
        ascIIValue = lido;
        printf("valor ascIIValue do lido: %d\n", ascIIValue);
        ascIIValue = ascIIValue + 100;
        printf("valor ascIIValue crypto: %d\n", ascIIValue);

        fwrite(&ascIIValue, sizeof(int), 1, arquivoBin);

        lido = getc(arquivo);
    }

    fclose(arquivoBin);
    fclose(arquivo);
    return 0;
}
