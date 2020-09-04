#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Função principal do programa
int main(){

    //Variáveis
    char palavra[10] = "Oi";

    for (int indice = 0; palavra[indice] != '\0'; indice++){
        printf("%c", palavra[indice]);
    }

    palavra[3] = 'x';
    printf("\n o valor armazenado em 3 eh <%g>", palavra[3]);
    printf("\n o valor armazenado em 4 eh <%g>", palavra[4]);
    printf("\n o valor armazenado em 5 eh <%g>", palavra[5]);
    printf("\n o valor armazenado em 6 eh <%g>", palavra[6]);
    printf("\n o valor armazenado em 7 eh <%g>", palavra[7]);
    printf("\n o valor armazenado em 8 eh <%g>", palavra[8]);
    printf("\n o valor armazenado em 9 eh <%g>", palavra[9]);

    printf("\n fim do programa");

/*
    //Limpa o Buffer
    setbuf(stdin, 0);

    //Lê a String
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';
*/
    //Imprime na tela
    //printf("%s\n", palavra);

    //Pausa o programa após executar
    system("pause");

}