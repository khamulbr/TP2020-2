#include <stdio.h>

void imprime(int *array_ptr, int size) {
    for(int i=0; i< size; i++){
        printf("%d\n", array_ptr[i]);
    }
}

int main(){
    char a = 'a';
    printf("o endereco de a inicia em: %p\n", &a);
    int vet[5] = {1,2,3,4,5};
    printf("o endereco de vet inicia em: %p\n", vet);
    for(int i=0; i< 5; i++){
        printf("o endereco de vet[%d] eh: %p\n", i, &vet[i]);
    }

    imprime(vet, 5);
}