#include <stdio.h>
#include <stdlib.h>

// 3) Escreva um programa que tenha uma função que compara duas strings usando ponteiros,
//retorne 1 se são iguais, ou 0 se são diferentes.

int compara(char* value1, char* value2) {

    if(*value1 == '\0' && *value2 == '\0')
       return 0;

    while (1 == 1){

        if (((*value1 == '\0') || (*value2 == '\0')) && (*value1 != *value2) )
            return 0;

        if ((*value1 == '\0') && (*value2 == '\0'))
            return 1;

        if (*value1 != *value2)
            return 0;

        value1++;
        value2++;
    }
    return 1;
}

int main()
{
    char string1[100];
    char string2[100];

    do {
        printf("informe a primeira palavra:");
        gets(string1);
        printf("informe a segunda palavra:");
        gets(string2);
        if(compara(string1, string2)==0) {
            printf("a palavra %s eh diferente da palavra %s\n", string1, string2);
        } else {
            printf("a palavra %s eh igual a palavra %s\n", string1, string2);
        }
    } while (!compara(string1,"sair"));


    return 0;
}
