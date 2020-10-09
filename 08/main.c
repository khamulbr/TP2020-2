#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long quantidade;
    printf("Informe a quantidade de valores\n");
    scanf("%d", &quantidade);

    // ALOCACAO ESTATICA
    int valores[quantidade];
    int indice;
    for (indice = 0 ; indice < quantidade; indice++) {
        printf("informe o valor para valores[%d]\n", indice);
        scanf("%d", &valores[indice]);
    }

    for (indice = 0 ; indice < quantidade; indice++) {
        printf("valores[%d] eh igual a %d\n", indice, valores[indice]);
    }

    // ALOCACAO DINAMICA
    int* valoresDinamico = NULL;
    valoresDinamico = (int*) malloc(quantidade * sizeof(int));
    if (valoresDinamico==NULL) {
        printf("Erro ao tentar alocar memoria\n");
        return 0;
    }
    for (indice = 0 ; indice < quantidade; indice++) {
        printf("informe o valor para valores[%d]\n", indice);
        scanf("%d", &valoresDinamico[indice]);
    }
    for (indice = 0 ; indice < quantidade; indice++) {
        printf("valoresDinamico[%d] eh igual a %d\n", indice, valoresDinamico[indice]);
    }
    return 0;
}
