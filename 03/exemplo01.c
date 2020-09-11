#include <stdio.h>

void fazNada(){
    printf("\nViu? Nao fiz nada!");
    return;
    printf("\nSera que vou aparecer?");
}

int maiorEntre(int x, int y){
    if (x > y) {
        printf("eita\n");
        return x;
    } else {
        printf("opa\n");
        return y;
    }        
}

void main(){
    int valorInformado;

    for (int i = 0; i < 4; i++){
        printf("\ninforme um valor: ");
        scanf("%i", &valorInformado);

        if (valorInformado > 10)
            printf("\nMuito bom!");
    }
    fazNada();

    int maior;
    
    maior = maiorEntre(1000, 10);
    printf("\nO maior entre 1000 e 10 eh: %d", maior);

    maior = maiorEntre(-999, 666);
    printf("\nO maior entre -999 e 666 eh: %d", maior);

    maior = maiorEntre(10, 10);
    printf("\nO maior entre 10 e 10 eh: %d", maior);

    printf("\nFim!!!!");
    return;
}