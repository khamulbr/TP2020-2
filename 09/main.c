#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//1. Escreva uma função em C para encontrar a primeira letra maiúscula em uma string
//usando recursão.

//Dados de entrada:
//Insira uma string para incluir uma ou mais letras maiúsculas: testString

//Saída esperada:
//A primeira letra maiúscula que aparece na string testString é S.

        // Cenario 1 - OK
        // Sapo -> A primeira letra maiúscula que aparece na string Sapo é S.

        // Cenario 2 :
        // felizDiadoprofessor -> A primeira letra maiúscula que aparece na string felizDiadoprofessor é D.

        // Cenario 3:
        // orato -> nao foi encontrada nenhuma maiuscula

char buscaPrimeiraMaiscula(char * stringToda, int count) {
    if (count < strlen(stringToda)) {
        // condicao de parada
        if (isupper(stringToda[count])) {
            return stringToda[count];
        }
        // condicao para continuar chamando a si mesma
        else {
            count = count + 1;
            return buscaPrimeiraMaiscula(stringToda, count);
        }
    } else return 0;
}

int main()
{
    char frase[100];

    do {
        // entrada de strings
        printf("\nInforme uma string: ");
        gets(frase);

        // busca da primeira maiuscula
        char resposta = buscaPrimeiraMaiscula(frase, 0);

        // impressao do resultado
        if (resposta != 0)
            printf("\nA primeira letra maiuscula que aparece na string %s eh: %c", frase, resposta);
        else
            printf("\nNao foi encontrada nenhuma maiuscula em %s\n", frase);

    } while (strcmp(frase, "fim"));

    return 0;
}
