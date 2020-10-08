#include <stdio.h>

void troca(int *valorA, int *valorB){
    int temp;
    temp = *valorA;
    *valorA = *valorB;
    *valorB = temp;
}

int main() {
    int valor1;
    int valor2;

    printf("\ninforme o valor 1: " );
    scanf("%d", &valor1);
    printf("\ninforme o valor 2: " );
    scanf("%d", &valor2);

    int temp;
    temp = valor1;
    valor1 = valor2;
    valor2 = temp;

    printf("\nvalor 1 = %d", valor1 );
    printf("\nvalor 2 = %d", valor2 );

    troca(&valor1, &valor2);

    printf("\nvalor 1 = %d", valor1 );
    printf("\nvalor 2 = %d", valor2 );
}
