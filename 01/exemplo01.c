#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int main() {
    time_t t;
    srand((unsigned) time(&t));

    const int TAXA_DE_CRESCIMENTO = 10; 
    float valorDecimal = 0.5;
    double outroDecimal = 11.0;
    char letra = 'a';
    bool logico = true;
    for(int j = 0; j< 10; j++){
        printf("%d \n", j);
    }

    printf("acabou sucesso %c \n", letra);

    int valoresAposAplicacao[10];
    for(int j = 0; j< 10; j = j+1){
        valoresAposAplicacao[j] = (j*outroDecimal) + TAXA_DE_CRESCIMENTO;
    }

    for(int j = 0; j< 10; j = j+1){
        printf("o valor em valoresAposAplicacao[%d] eh %d \n", j, valoresAposAplicacao[j]);
    }

    int tabuleiro[10][10];
    for (int x = 0; x < 10 ; x++) {
        for (int y = 0; y < 10; y++) {
            tabuleiro[x][y] = (rand() % 2);
        }
    }

    for (int x = 0; x < 10 ; x++) {
        for (int y = 0; y < 10; y++) {
            printf(" %d ", tabuleiro[x][y]);
        }
        printf("\n");
    }


    int jogadaX = 0;
    int jogadaY = 0;
    while(true){
        do {
            printf("\n informe o X:");
            scanf("%i", &jogadaX);
        } while (jogadaX < 0 || jogadaX > 10);

        do {
            printf("\n informe o Y:");
            scanf("%d", &jogadaY);
        } while (jogadaY < 0 || jogadaY > 10);

        if (tabuleiro[jogadaX][jogadaY]==1) {
            printf("\n KABUM \n");
            break;
        } else {
            printf("\n nao tem bomba, parabens \n");
            printf("quer seguir tentando? S/N");
            char opcao;
            scanf("%d", &opcao);
            if (opcao=='N' || opcao=='n'){
                break;
            }
        }
    }
    system("PAUSE");
    return 0;
}