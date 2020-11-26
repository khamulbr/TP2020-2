#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numLinhas = 0;
    FILE *arquivo = fopen("teste.txt", "r");
    char lido;

    if(arquivo==NULL){
        printf("Arquivo inexistente");
        exit(1);
    }

    lido = getc(arquivo);

    while(lido != EOF){
        if (lido == '\n') {
            numLinhas++;
        }
        lido = getc(arquivo);
    }

    printf("acabou a leitura, com %d linhas", numLinhas);
    fclose(arquivo);
    return 0;
}
