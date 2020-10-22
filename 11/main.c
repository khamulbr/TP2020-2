#include <stdio.h>
#include <stdlib.h>

int* minMaxVetor(int nossoVetor[5]) {
    // SUPONHO QUE ENQUANTO NAO COMPAREI, TANTO
    // O MENOR VALOR, QUANTO O MAIOR, SAO O PRIMEIRO ELEMENTO
    // DO VETOR
    int menor = nossoVetor[0];
    int maior = nossoVetor[0];
    for (int indice = 1; indice < 5; indice ++){
        if (nossoVetor[indice] > maior)
            maior = nossoVetor[indice];
        if (nossoVetor[indice] < menor)
            menor = nossoVetor[indice];
    }
    // RETORNAR UM VETOR COM OS DOIS VALORES
    int* retorno = malloc(2* sizeof(int));
    int* enderecoInicial = retorno;
    *retorno = menor;
    printf("o endereco de retorno eh: %p\n", retorno);
    retorno++;
    *retorno = maior;
    printf("o endereco de retorno eh: %p\n", retorno);
    return enderecoInicial;
}

int main()
{
    int valores[5];
    int indice = 0;
    // PREENCHIMENTO DO VETOR
    for (indice = 0; indice < 5; indice++){
        printf("informe um valor para a posicao %d: ", indice);
        scanf("%d", &valores[indice]);
    }
    // CHAMAR A FUNCAO MINMAX
    // int* menorMaior;
    int* valoresRetornados = minMaxVetor(valores);
    printf("o endereco de menorMaior eh: %p\n", valoresRetornados);
    printf("o menor valor encontrado foi: %d\n", *valoresRetornados);
    valoresRetornados++;
    printf("o maior valor encontrado foi: %d\n", *valoresRetornados);
    return 0;
}
