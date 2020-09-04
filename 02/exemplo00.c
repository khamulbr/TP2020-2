#include<stdio.h>
#include<stdlib.h>

int main() {
    // posicoes de 0 a 9
    char letra = 'l';
    char palavra[10];

    // for (int indice = 0; indice < 10; indice++){
    //     if (palavra[indice]=='\0')
    //         break;
    //     printf("palavra[%d] : ", indice);
    //     printf("%c\n", palavra[indice]);
    // }

    int indice = 0;
    while(palavra[indice]!='\0'){
        printf("palavra[%d] : ", indice);
        printf("%s\n", palavra[indice]);
        indice++;
    }

    printf("\na palavra eh: %s", palavra);   

    
}