#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int numCaracteres = 0;
    int numPalavras = 0;
    FILE *arquivo = fopen("teste.txt", "r");
    char lido;
    bool achouNumero = false;

    if(arquivo==NULL){
        printf("Arquivo inexistente");
        exit(1);
    }

    lido = getc(arquivo);
    if (isalpha(lido)) {
        numCaracteres++;
        numPalavras++;
    }

    while(lido != EOF){
        if (lido == ' ' || lido == '\n') {
            if (!achouNumero)
                numPalavras++;
            achouNumero = false;
        } else {
            if (!isalpha(lido)){
                achouNumero = true;
            } else {
                numCaracteres++;
            }
        }

        lido = getc(arquivo);
    }

    printf("acabou a leitura, com %d palavras e %d caracteres", numPalavras, numCaracteres);
    fclose(arquivo);

    return 0;
}
