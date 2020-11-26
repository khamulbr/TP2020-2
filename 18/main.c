#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numLinhas, i;
    FILE *arquivo = fopen("teste.txt", "w");

    printf("Insira o numero de linhas a serem escritas:\n");
    scanf("%d",&numLinhas);

    for(i = 0; i < numLinhas; i ++){
        fprintf(arquivo,"linha de teste %d\n", i+1);
    }

    fclose(arquivo);

    return 0;
}
