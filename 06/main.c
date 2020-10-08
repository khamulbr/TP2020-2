#include <stdio.h>
#include <stdlib.h>

void troca(int *v1, int *v2){
    int auxiliar;
    auxiliar = *v1;
    *v1 = *v2;
    *v2 = auxiliar;

    printf("v1 em troca: %d\n", *v1);
    printf("v2 em troca: %d\n", *v2);
}

int main()
{
    int val1;
    int val2;

    printf("Informe o valor1: \n");
    scanf("%d", &val1);
    printf("Informe o valor2: \n");
    scanf("%d", &val2);

    troca(&val1, &val2);

    printf("val1 em main: %d\n", val1);
    printf("val2 em main: %d\n", val2);

    return 0;
}
