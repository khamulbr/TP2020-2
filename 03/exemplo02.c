#include <stdio.h>

// valor é uma Variavel Global
int valor = 10;

// numero é um Parametro formal
int parOuImpar(int numero){

    numero = numero + 10;
    printf("numero = %d\n", numero);

    if (numero % 2 == 0)
        return 0;
    else 
        return 1;
}

int main() {

    // valor Informado é uma variavel local
    int valorInformado;

    printf("\ninforme um valor: ");
    scanf("%i", &valorInformado);

    printf("valor global = %d\n", valor);

    int resultado = parOuImpar(valorInformado);
    if (resultado==0){
        printf("O numero eh par");
    } else {
        printf("O numero eh impar");
    }   

    printf("valor informado = %d\n", valorInformado);


}