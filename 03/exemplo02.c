#include <stdio.h>

int parOuImpar(int numero){
    if (numero % 2 == 0)
        return 0;
    else 
        return 1;
}

int main() {
    int valorInformado;
    printf("\ninforme um valor: ");
    scanf("%i", &valorInformado);

    int resultado = parOuImpar(valorInformado);
    if (resultado==0){
        printf("O numero eh par");
    } else {
        printf("O numero eh impar");
    }   

}